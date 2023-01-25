---
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
---
ENTITY SPI_SDIO_tb IS
END SPI_SDIO_tb;
---
ARCHITECTURE behavior OF SPI_SDIO_tb IS 
 
   ---Inputs
   signal CLK_SYS : std_logic := '0';
   signal SCLK 	: std_logic := '0';
   signal Start 	: std_logic := '0';
   signal Data_In : std_logic_vector(23 downto 0) := (others => '0');

	---BiDirs
   signal SDIO 	: std_logic;

 	---Outputs
   signal CS_n 	: std_logic;
   signal RW_CTL 	: std_logic;
	
	--- Internal Signal
	signal SCLK_Start     : std_logic := '0';
	
   ---Clock period definitions 10MHZ
   constant CLK_SYS_period : time     := 100 ns;
   constant SCLK_period    : time     := 100 ns;
 
BEGIN
 
	--- Instantiate the Unit Under Test (UUT)
   uut: entity work.SPI_SDIO PORT MAP (
          CLK_SYS => CLK_SYS,
          SCLK    => SCLK,
          Start   => Start,
          Data_In => Data_In,
          CS_n    => CS_n,
          RW_CTL  => RW_CTL,
          SDIO    => SDIO
        );

	--- CLK_SYS generator
	CLK_SYS_Pro :process
   begin
		CLK_SYS <= '0';
		wait for CLK_SYS_period/2;
		CLK_SYS <= '1';
		wait for CLK_SYS_period/2;
   end process CLK_SYS_Pro;
	
	--- SCLK_Start generator
	SCLK_Start_Pro :process
	begin
		SCLK_Start <= '0','1' after 	150ns, '0' after 18350ns;
   wait;
	end process SCLK_Start_Pro;
	---

	--- SCLK Generate
	SCLK_Pro : process
	begin
		---
		if(SCLK_Start = '1') then
			---
			SCLK <= '0';
			wait for SCLK_period/2;
			SCLK <= '1';
			wait for SCLK_period/2;
			---
		else
			---
			SCLK <= '0';
			wait until SCLK_Start = '1';
			---
		end if;
		---
	end process SCLK_Pro;
	---
	
	--- Start generator
	Start_Pro :process
	begin
		---
			Start  <= '0', '1' after 	 100ns,  '0' after    200ns, '1' after  2750ns,  '0' after  2850ns,
						   	'1' after   5300ns,  '0' after   5400ns, '1' after  7950ns,  '0' after  8050ns,
								'1' after  10500ns,  '0' after  10600ns, '1' after  13150ns, '0' after  13250ns,
								'1' after  15750ns,  '0' after  15850ns;
	wait;
	
	end process start_Pro;
	
	--- data_In_generator
	Data_In_Pro:process
	begin
		---
		Data_In <=  "000000000000000010000001",                    -- Adr:0x0000, Data:10000001 : For Soft Rst
				      "000000000000000110000000"  after 2850ns,      -- Adr:0x0001, Data:10000000 : For Single Instruction
					   "100000000000010100000000"  after 5450ns,	     -- Adr:0x0005, Data:10010001 : Read MSB 0x91
						"000000000000100000000000"  after 8050ns,      -- Adr:0x0008, Data:00000000 : For Paging
					   "000000001001000011111010"  after 10650ns,     -- Adr:0x0090, Data:11111010 : Power Down DAC 0 & 2
						"000000000000000000000000"  after 13250ns,     -- 0
						"111111111111111111111111"  after 15850ns;     -- 1
						
		wait;
		---
	end process Data_In_Pro;
	
	
 --- SDIO genarator 0x91
  
   SDIO <= 'Z' when RW_CTL = '0'  else 
											   '1'                       , '0' after SCLK_period*1,
												'0' after SCLK_period*2   , '1' after SCLK_period*3,
											   '0' after SCLK_period*4   , '0' after SCLK_period*5,
											   '0' after SCLK_period*6   , '1' after SCLK_period*7;
												
					
END;
