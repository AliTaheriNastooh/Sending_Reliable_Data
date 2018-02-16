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
static const char *ng0 = "F:/ali/home work/verilog/project/project2/crc.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {50, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {8, 0};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {13, 0};
static int ng16[] = {14, 0};
static int ng17[] = {15, 0};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(33, ng0);

LAB2:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t6[8];
    char t32[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    int t57;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t28 = (t0 + 2248);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t32) = 1;

LAB17:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);

LAB22:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1368U);
    t21 = *((char **)t8);
    t8 = (t0 + 1328U);
    t22 = (t8 + 72U);
    t28 = *((char **)t22);
    t29 = (t0 + 2248);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_get_index_select_value(t32, 1, t21, t28, 2, t31, 7, 2);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    *((unsigned int *)t56) = t17;
    t33 = (t6 + 4);
    t34 = (t32 + 4);
    t47 = (t56 + 4);
    t18 = *((unsigned int *)t33);
    t19 = *((unsigned int *)t34);
    t20 = (t18 | t19);
    *((unsigned int *)t47) = t20;
    t23 = *((unsigned int *)t47);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB23;

LAB24:
LAB25:    t48 = (t0 + 2568);
    xsi_vlogvar_assign_value(t48, t56, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t21, 2, t22, 32, 1);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t57 = (!(t9));
    if (t57 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2568);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t22);
    t17 = (t15 ^ t16);
    *((unsigned int *)t32) = t17;
    t28 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = (t32 + 4);
    t18 = *((unsigned int *)t28);
    t19 = *((unsigned int *)t29);
    t20 = (t18 | t19);
    *((unsigned int *)t30) = t20;
    t23 = *((unsigned int *)t30);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB30;

LAB31:
LAB32:    t31 = (t0 + 1928);
    t33 = (t0 + 1928);
    t34 = (t33 + 72U);
    t47 = *((char **)t34);
    t48 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t56, t47, 2, t48, 32, 1);
    t54 = (t56 + 4);
    t27 = *((unsigned int *)t54);
    t57 = (!(t27));
    if (t57 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 9);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 9);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 10);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 10);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 11);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 11);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 12);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 12);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 13);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 13);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 1928);
    t21 = (t0 + 1928);
    t22 = (t21 + 72U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t29, 32, 1);
    t30 = (t32 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 14);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 14);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t8 = (t0 + 2568);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t22);
    t17 = (t15 ^ t16);
    *((unsigned int *)t32) = t17;
    t28 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = (t32 + 4);
    t18 = *((unsigned int *)t28);
    t19 = *((unsigned int *)t29);
    t20 = (t18 | t19);
    *((unsigned int *)t30) = t20;
    t23 = *((unsigned int *)t30);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB59;

LAB60:
LAB61:    t31 = (t0 + 1928);
    t33 = (t0 + 1928);
    t34 = (t33 + 72U);
    t47 = *((char **)t34);
    t48 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t56, t47, 2, t48, 32, 1);
    t54 = (t56 + 4);
    t27 = *((unsigned int *)t54);
    t57 = (!(t27));
    if (t57 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 7, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 7, 0LL);

LAB20:    goto LAB12;

LAB16:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);

LAB21:    xsi_set_current_line(44, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 65535U);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 16, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB20;

LAB23:    t25 = *((unsigned int *)t56);
    t26 = *((unsigned int *)t47);
    *((unsigned int *)t56) = (t25 | t26);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t6), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB29;

LAB30:    t25 = *((unsigned int *)t32);
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t25 | t26);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t31, t32, 0, *((unsigned int *)t56), 1, 0LL);
    goto LAB34;

LAB35:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB36;

LAB37:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB38;

LAB39:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB40;

LAB41:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB42;

LAB43:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB44;

LAB45:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB46;

LAB47:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB48;

LAB49:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB50;

LAB51:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB52;

LAB53:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB54;

LAB55:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB56;

LAB57:    xsi_vlogvar_wait_assign_value(t8, t6, 0, *((unsigned int *)t32), 1, 0LL);
    goto LAB58;

LAB59:    t25 = *((unsigned int *)t32);
    t26 = *((unsigned int *)t30);
    *((unsigned int *)t32) = (t25 | t26);
    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t31, t32, 0, *((unsigned int *)t56), 1, 0LL);
    goto LAB63;

}


extern void work_m_00000000002645547166_2170937526_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_38_1};
	xsi_register_didat("work_m_00000000002645547166_2170937526", "isim/test5_isim_beh.exe.sim/work/m_00000000002645547166_2170937526.didat");
	xsi_register_executes(pe);
}
