---
LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;
---
ENTITY SPI_SDIO IS
    ---
    PORT (
        ---  Inputs
        CLK_SYS     : IN    STD_LOGIC;
        SCLK        : IN    STD_LOGIC;
		  Data_In     : IN    STD_LOGIC_VECTOR (23 downto 0);
        Start       : IN    STD_LOGIC;
        ---  Outputs
        CS_n        : OUT   STD_LOGIC;
        RW_CTL      : OUT   STD_LOGIC;
        ---  Inout
        SDIO        : INOUT STD_LOGIC
    );
   --- 
END SPI_SDIO;
---
ARCHITECTURE Behavioral OF SPI_SDIO IS
    ---     SPI Input/Output Register    
    SIGNAL   CS_n_INT       : STD_LOGIC                         := '1';
    SIGNAL   RW_CTL_INT     : STD_LOGIC                         := '0';
    SIGNAL   Data_In_INT    : STD_LOGIC_VECTOR (7 DOWNTO 0)     := (OTHERS => '0');
    SIGNAL   Start_INT      : STD_LOGIC                         := '0';
    ---
                            
    ---     SPI Internal Signals
    SIGNAL   Rx_Data        : STD_LOGIC_VECTOR (7  DOWNTO 0)    := (OTHERS => '0');
    SIGNAL   INST_Byte      : STD_LOGIC_VECTOR (15 DOWNTO 0)    := (OTHERS => '0');               
    SIGNAL   Tx             : STD_LOGIC                         := 'Z';

    ---     SPI Counter
    SIGNAL   Bit_CNT        : UNSIGNED         (3 DOWNTO 0)     := "1111";
    ---

    ---     SPI State
    TYPE     FSM IS (idle, instruction, write_S, read_S, delay_instruction, delay_read);
    SIGNAL   State          : FSM                               := idle;
    ---
BEGIN
    ---
    CS_n    <= CS_n_INT;
    RW_CTL  <= RW_CTL_INT;
	 
	 ---     Combinational Circut for SDIO
    SDIO    <= Tx when RW_CTL_INT = '0' else 'Z';
    ---
	 
    PROCESS (CLK_SYS)
	 ---
	 
    BEGIN
        ---
        IF (rising_edge(CLK_SYS)) THEN
            ---  data separation : 7 Data / 16 Instruction
            Data_In_INT <= Data_In (7  downto  0);
            INST_Byte   <= Data_In (23 downto  8);
            Start_INT   <= Start;
            ---
            CASE State IS
                ---
                WHEN idle =>
                    ---  First State
                    RW_CTL_INT <= '0';
                    Tx         <= 'Z';
                    Bit_CNT    <= "1111";
                    Rx_Data    <= (others => '0');
                    ---
                    IF (Start_INT = '1') THEN
                        ---
                        State    <= delay_instruction;
                        CS_n_INT <= '0';
                        ---
                    ELSE
                        ---
                        State       <= idle;
                        CS_n_INT    <= '1';
                        ---
                    END IF;
                    --- Second State
                WHEN delay_instruction =>
                    ---
                    State 		  <= instruction;
                    RW_CTL_INT  <= '0';
                    CS_n_INT    <= '0';
                    Tx          <= Inst_Byte (to_integer(Bit_CNT));
                    Bit_CNT     <= Bit_CNT - 1;
                    Rx_Data     <= (others => '0');
                    --- 3th State
                WHEN instruction =>
                    ---
                    RW_CTL_INT  <= '0';
                    CS_n_INT    <= '0';
                    Tx          <= Inst_Byte (to_integer(Bit_CNT));
                    Rx_Data     <= (others => '0');
                    ---
                    IF (Bit_CNT /= "0000") THEN
                        ---
                        State   <= instruction;
                        Bit_CNT <= Bit_CNT - 1;
                        ---
                    ELSE
                        ---
                        Bit_CNT <= "0111";
                        --- MSB Bit For R/W Operation
                        if(Inst_byte(15) = '0') then
                            ---
                            State <= write_S;
                            ---
                        else
                            ---
                            State <= delay_read;
									 
                            ---
                        end if;
                        --- 
                    end if;
                    
                WHEN write_S =>
                    ---
                    RW_CTL_INT  <= '0';
                    CS_n_INT    <= '0';
                    Tx          <= Data_In_INT (to_integer(Bit_CNT));
                    Rx_Data     <= (others => '0');
                    ---
                    IF (Bit_CNT /= "0000") THEN
                        ---
                        State     <= write_S;
                        Bit_CNT   <= Bit_CNT - 1;
                        ---
                    ELSE
                       ---
                        State      <= idle;
                        Bit_CNT    <= "1111";
                        ---
                    END IF;
                    ---
                WHEN delay_read =>
                    ---
                    State       <= read_S;
                    RW_CTL_INT  <= '1';
                    CS_n_INT    <= '0';
                    Tx          <= 'Z';
						  Rx_Data  (to_integer(Bit_CNT))   <= SDIO; 
						  Bit_CNT     <= Bit_CNT - 1;
                    ---
                WHEN others =>
                    ---
                    RW_CTL_INT  <= '1';
                    CS_n_INT    <= '0';
                    Tx          <= 'Z';
                    Rx_Data  (to_integer(Bit_CNT))   <= SDIO;
                    ---
                    if (Bit_CNT /= "0000") then
                        ---
                        State     <= read_S;
                        Bit_CNT   <= Bit_CNT - 1;
                        ---
                    else
                        ---
                        State     <= idle;
                        Bit_CNT   <= "1111";
                        ---
                    end if;
                    ---
            end case;
            ---
        END IF;
    END PROCESS;
END Behavioral;