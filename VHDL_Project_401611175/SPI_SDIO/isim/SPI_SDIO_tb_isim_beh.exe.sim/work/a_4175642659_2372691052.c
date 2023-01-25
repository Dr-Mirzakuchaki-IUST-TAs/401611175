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
static const char *ng0 = "C:/Users/Javad/Desktop/VHDL_Project_401611175/SPI_SDIO/SPI_SDIO_tb.vhd";



static void work_a_4175642659_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4175642659_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (150 * 1000LL);
    t8 = (t0 + 5272);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (18350 * 1000LL);
    t14 = (t0 + 5272);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    xsi_set_current_line(57, ng0);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_4175642659_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);

LAB17:    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB18;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5336);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3856);
    xsi_process_wait(t2, t11);

LAB9:    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB5:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3856);
    xsi_process_wait(t2, t11);

LAB13:    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB8:    goto LAB7;

LAB10:    goto LAB8;

LAB11:    goto LAB5;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

LAB15:    t3 = (t0 + 5112);
    *((int *)t3) = 0;
    goto LAB5;

LAB16:    t3 = (t0 + 2152U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB15;
    else
        goto LAB17;

LAB18:    goto LAB16;

}

static void work_a_4175642659_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int64 t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int64 t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    int64 t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int64 t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int64 t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int64 t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    int64 t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    int64 t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    int64 t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    int64 t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (100 * 1000LL);
    t8 = (t0 + 5400);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    t13 = (200 * 1000LL);
    t14 = (t0 + 5400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t13);
    t19 = (2750 * 1000LL);
    t20 = (t0 + 5400);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t20, 0U, 1, t19);
    t25 = (2850 * 1000LL);
    t26 = (t0 + 5400);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t26, 0U, 1, t25);
    t31 = (5300 * 1000LL);
    t32 = (t0 + 5400);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t32, 0U, 1, t31);
    t37 = (5400 * 1000LL);
    t38 = (t0 + 5400);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t38, 0U, 1, t37);
    t43 = (7950 * 1000LL);
    t44 = (t0 + 5400);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    *((unsigned char *)t48) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t44, 0U, 1, t43);
    t49 = (8050 * 1000LL);
    t50 = (t0 + 5400);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t50, 0U, 1, t49);
    t55 = (10500 * 1000LL);
    t56 = (t0 + 5400);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t56, 0U, 1, t55);
    t61 = (10600 * 1000LL);
    t62 = (t0 + 5400);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    *((unsigned char *)t66) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t62, 0U, 1, t61);
    t67 = (13150 * 1000LL);
    t68 = (t0 + 5400);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    *((unsigned char *)t72) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t68, 0U, 1, t67);
    t73 = (13250 * 1000LL);
    t74 = (t0 + 5400);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    *((unsigned char *)t78) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t74, 0U, 1, t73);
    t79 = (15750 * 1000LL);
    t80 = (t0 + 5400);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    *((unsigned char *)t84) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t80, 0U, 1, t79);
    t85 = (15850 * 1000LL);
    t86 = (t0 + 5400);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    *((unsigned char *)t90) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t86, 0U, 1, t85);
    xsi_set_current_line(90, ng0);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_4175642659_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int64 t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int64 t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int64 t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int64 t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int64 t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 4544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8528);
    t4 = (t0 + 5464);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 24U);
    xsi_driver_first_trans_delta(t4, 0U, 24U, 0LL);
    t9 = (2850 * 1000LL);
    t10 = (t0 + 8552);
    t12 = (t0 + 5464);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 24U);
    xsi_driver_subsequent_trans_delta(t12, 0U, 24U, t9);
    t17 = (5450 * 1000LL);
    t18 = (t0 + 8576);
    t20 = (t0 + 5464);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 24U);
    xsi_driver_subsequent_trans_delta(t20, 0U, 24U, t17);
    t25 = (8050 * 1000LL);
    t26 = (t0 + 8600);
    t28 = (t0 + 5464);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 24U);
    xsi_driver_subsequent_trans_delta(t28, 0U, 24U, t25);
    t33 = (10650 * 1000LL);
    t34 = (t0 + 8624);
    t36 = (t0 + 5464);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t34, 24U);
    xsi_driver_subsequent_trans_delta(t36, 0U, 24U, t33);
    t41 = (13250 * 1000LL);
    t42 = (t0 + 8648);
    t44 = (t0 + 5464);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t42, 24U);
    xsi_driver_subsequent_trans_delta(t44, 0U, 24U, t41);
    t49 = (15850 * 1000LL);
    t50 = (t0 + 8672);
    t52 = (t0 + 5464);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t50, 24U);
    xsi_driver_subsequent_trans_delta(t52, 0U, 24U, t49);
    xsi_set_current_line(106, ng0);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_4175642659_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    int64 t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    int64 t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int64 t32;
    int64 t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    int64 t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    int64 t48;
    int64 t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int64 t56;
    int64 t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int64 t64;
    int64 t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;

LAB0:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 5528);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    t14 = (t0 + 2568U);
    t15 = *((char **)t14);
    t16 = *((int64 *)t15);
    t17 = (t16 * 1);
    t14 = (t0 + 5528);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t14, 0U, 1, t17);
    t22 = (t0 + 2568U);
    t23 = *((char **)t22);
    t24 = *((int64 *)t23);
    t25 = (t24 * 2);
    t22 = (t0 + 5528);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t22, 0U, 1, t25);
    t30 = (t0 + 2568U);
    t31 = *((char **)t30);
    t32 = *((int64 *)t31);
    t33 = (t32 * 3);
    t30 = (t0 + 5528);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    *((unsigned char *)t37) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t30, 0U, 1, t33);
    t38 = (t0 + 2568U);
    t39 = *((char **)t38);
    t40 = *((int64 *)t39);
    t41 = (t40 * 4);
    t38 = (t0 + 5528);
    t42 = (t38 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t38, 0U, 1, t41);
    t46 = (t0 + 2568U);
    t47 = *((char **)t46);
    t48 = *((int64 *)t47);
    t49 = (t48 * 5);
    t46 = (t0 + 5528);
    t50 = (t46 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    *((unsigned char *)t53) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t46, 0U, 1, t49);
    t54 = (t0 + 2568U);
    t55 = *((char **)t54);
    t56 = *((int64 *)t55);
    t57 = (t56 * 6);
    t54 = (t0 + 5528);
    t58 = (t54 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    *((unsigned char *)t61) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t54, 0U, 1, t57);
    t62 = (t0 + 2568U);
    t63 = *((char **)t62);
    t64 = *((int64 *)t63);
    t65 = (t64 * 7);
    t62 = (t0 + 5528);
    t66 = (t62 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    *((unsigned char *)t69) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t62, 0U, 1, t65);

LAB2:    t70 = (t0 + 5128);
    *((int *)t70) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5528);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_4175642659_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4175642659_2372691052_p_0,(void *)work_a_4175642659_2372691052_p_1,(void *)work_a_4175642659_2372691052_p_2,(void *)work_a_4175642659_2372691052_p_3,(void *)work_a_4175642659_2372691052_p_4,(void *)work_a_4175642659_2372691052_p_5};
	xsi_register_didat("work_a_4175642659_2372691052", "isim/SPI_SDIO_tb_isim_beh.exe.sim/work/a_4175642659_2372691052.didat");
	xsi_register_executes(pe);
}
