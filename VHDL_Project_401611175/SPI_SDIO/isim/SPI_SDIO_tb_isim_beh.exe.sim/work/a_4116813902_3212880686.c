/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Javad/Desktop/VHDL_Project_401611175/SPI_SDIO/SPI_SDIO.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3454299738_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4116813902_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5784);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5656);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4116813902_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5848);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5672);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4116813902_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 5912);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 5688);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3112U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 5912);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4116813902_3212880686_p_3(char *t0)
{
    char t17[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    int t14;
    int t15;
    char *t16;
    char *t18;
    static char *nl0[] = {&&LAB6, &&LAB8, &&LAB9, &&LAB11, &&LAB7, &&LAB10};

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = (23 - 7);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = (t0 + 5976);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t5 = (23 - 23);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t4 = (t0 + 6040);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 6104);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 6168);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 9936);
    t4 = (t0 + 6296);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6360);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t13 = (t2 == (unsigned char)3);
    if (t13 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB5;

LAB7:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t15 = (t14 - 15);
    t5 = (t15 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t14);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t8 = (t3 + t7);
    t2 = *((unsigned char *)t8);
    t9 = (t0 + 6232);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t8 = (t17 + 12U);
    t5 = *((unsigned int *)t8);
    t6 = (1U * t5);
    t2 = (4U != t6);
    if (t2 == 1)
        goto LAB15;

LAB16:    t9 = (t0 + 6296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(92, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6360);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB8:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t15 = (t14 - 15);
    t5 = (t15 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t14);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t8 = (t3 + t7);
    t2 = *((unsigned char *)t8);
    t9 = (t0 + 6232);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(99, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6360);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = (t0 + 9940);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (3 - 0);
    t5 = (t14 * 1);
    t5 = (t5 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t5;
    t2 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t3, t1, t4, t17);
    if (t2 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 9944);
    t4 = (t0 + 6296);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t14 = (15 - 15);
    t5 = (t14 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t2 = *((unsigned char *)t1);
    t13 = (t2 == (unsigned char)2);
    if (t13 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB23:
LAB18:    goto LAB5;

LAB9:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t15 = (t14 - 7);
    t5 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t8 = (t3 + t7);
    t2 = *((unsigned char *)t8);
    t9 = (t0 + 6232);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(128, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6360);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = (t0 + 9948);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (3 - 0);
    t5 = (t14 * 1);
    t5 = (t5 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t5;
    t2 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t3, t1, t4, t17);
    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 9952);
    t4 = (t0 + 6296);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB26:    goto LAB5;

LAB10:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 6232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t15 = (t14 - 7);
    t5 = (t15 * -1);
    t6 = (1 * t5);
    t7 = (0U + t6);
    t8 = (t0 + 6360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_delta(t8, t7, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t8 = (t17 + 12U);
    t5 = *((unsigned int *)t8);
    t6 = (1U * t5);
    t2 = (4U != t6);
    if (t2 == 1)
        goto LAB30;

LAB31:    t9 = (t0 + 6296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB5;

LAB11:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 6168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 6232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t1 = (t0 + 9844U);
    t14 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t1);
    t15 = (t14 - 7);
    t5 = (t15 * -1);
    t6 = (1 * t5);
    t7 = (0U + t6);
    t8 = (t0 + 6360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t2;
    xsi_driver_first_trans_delta(t8, t7, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = (t0 + 9956);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (3 - 0);
    t5 = (t14 * 1);
    t5 = (t5 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t5;
    t2 = ieee_p_1242562249_sub_3454299738_1035706684(IEEE_P_1242562249, t3, t1, t4, t17);
    if (t2 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 6424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 9960);
    t4 = (t0 + 6296);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);

LAB33:    goto LAB5;

LAB12:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 6424);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 6488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_size_not_matching(4U, t6, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 6424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)1;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t8 = (t17 + 12U);
    t5 = *((unsigned int *)t8);
    t6 = (1U * t5);
    t2 = (4U != t6);
    if (t2 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 6296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB18;

LAB20:    xsi_size_not_matching(4U, t6, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 6424);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB23;

LAB25:    xsi_set_current_line(132, ng0);
    t10 = (t0 + 6424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t8 = (t17 + 12U);
    t5 = *((unsigned int *)t8);
    t6 = (1U * t5);
    t2 = (4U != t6);
    if (t2 == 1)
        goto LAB28;

LAB29:    t9 = (t0 + 6296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB26;

LAB28:    xsi_size_not_matching(4U, t6, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(4U, t6, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(160, ng0);
    t10 = (t0 + 6424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t16 = (t12 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 9844U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t17, t3, t1, 1);
    t8 = (t17 + 12U);
    t5 = *((unsigned int *)t8);
    t6 = (1U * t5);
    t2 = (4U != t6);
    if (t2 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 6296);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB33;

LAB35:    xsi_size_not_matching(4U, t6, 0);
    goto LAB36;

}


extern void work_a_4116813902_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4116813902_3212880686_p_0,(void *)work_a_4116813902_3212880686_p_1,(void *)work_a_4116813902_3212880686_p_2,(void *)work_a_4116813902_3212880686_p_3};
	xsi_register_didat("work_a_4116813902_3212880686", "isim/SPI_SDIO_tb_isim_beh.exe.sim/work/a_4116813902_3212880686.didat");
	xsi_register_executes(pe);
}
