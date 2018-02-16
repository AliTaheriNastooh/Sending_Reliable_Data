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
static const char *ng0 = "F:/ali/home work/verilog/project/project2/noise.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {10U, 0U};
static unsigned int ng5[] = {11U, 0U};
static unsigned int ng6[] = {12U, 0U};
static int ng7[] = {65, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1744);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t8[8];
    char t24[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t103[8];
    char t111[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1744);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB14;

LAB15:    memcpy(t65, t24, 8);

LAB16:    t93 = (t65 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t65);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(50, ng0);

LAB49:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1584);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 66);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 5, t5, 32);
    t6 = (t0 + 1744);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 5);

LAB30:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t37 = (t0 + 1744);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB20;

LAB17:    if (t53 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t41) = 1;

LAB20:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t58) != 0)
        goto LAB23;

LAB24:    t66 = *((unsigned int *)t24);
    t67 = *((unsigned int *)t57);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = (t24 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB23:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t24 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t79);
    t82 = (~(t81));
    t83 = *((unsigned int *)t24);
    t84 = (t83 & t82);
    t85 = *((unsigned int *)t80);
    t86 = (~(t85));
    t87 = *((unsigned int *)t57);
    t88 = (t87 & t86);
    t89 = (~(t84));
    t90 = (~(t88));
    t91 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t91 & t89);
    t92 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t92 & t90);
    goto LAB27;

LAB28:    xsi_set_current_line(36, ng0);

LAB31:    xsi_set_current_line(37, ng0);
    t99 = (t0 + 1744);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = ((char*)((ng3)));
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 32, t101, 5, t102, 32);
    t104 = (t0 + 1744);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 5);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1144U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    t7 = ((char*)((ng4)));
    xsi_vlog_generic_get_part_select_value(t8, 11, t3, t5, 2, t6, 32U, 1, t7, 32U, 2);
    t9 = (t0 + 1584);
    t10 = (t0 + 1584);
    t23 = (t10 + 72U);
    t25 = *((char **)t23);
    t31 = ((char*)((ng1)));
    t32 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t24, t41, t57, ((int*)(t25)), 2, t31, 32, 1, t32, 32, 2);
    t37 = (t24 + 4);
    t11 = *((unsigned int *)t37);
    t84 = (!(t11));
    t38 = (t41 + 4);
    t12 = *((unsigned int *)t38);
    t88 = (!(t12));
    t105 = (t84 && t88);
    t39 = (t57 + 4);
    t13 = *((unsigned int *)t39);
    t106 = (!(t13));
    t107 = (t105 && t106);
    if (t107 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1144U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t3, t5, 2, t6, 5, 2);
    t7 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t24) = 1;

LAB37:    t25 = (t24 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(44, ng0);

LAB44:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1584);
    t4 = (t0 + 1584);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t8, t6, 2, t7, 5, 2);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t9);
    t84 = (!(t11));
    if (t84 == 1)
        goto LAB45;

LAB46:
LAB40:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1144U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng7)));
    xsi_vlog_generic_get_part_select_value(t111, 54, t3, t5, 2, t6, 32U, 2, t7, 32U, 1);
    t9 = (t0 + 1584);
    t10 = (t0 + 1584);
    t23 = (t10 + 72U);
    t25 = *((char **)t23);
    t31 = ((char*)((ng6)));
    t32 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t8, t24, t41, ((int*)(t25)), 2, t31, 32, 2, t32, 32, 1);
    t37 = (t8 + 4);
    t11 = *((unsigned int *)t37);
    t84 = (!(t11));
    t38 = (t24 + 4);
    t12 = *((unsigned int *)t38);
    t88 = (!(t12));
    t105 = (t84 && t88);
    t39 = (t41 + 4);
    t13 = *((unsigned int *)t39);
    t106 = (!(t13));
    t107 = (t105 && t106);
    if (t107 == 1)
        goto LAB47;

LAB48:    goto LAB30;

LAB32:    t14 = *((unsigned int *)t57);
    t108 = (t14 + 0);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t41);
    t109 = (t15 - t16);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t9, t8, t108, *((unsigned int *)t41), t110);
    goto LAB33;

LAB36:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(40, ng0);

LAB41:    xsi_set_current_line(41, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 1584);
    t37 = (t0 + 1584);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t41, t39, 2, t40, 5, 2);
    t42 = (t41 + 4);
    t33 = *((unsigned int *)t42);
    t84 = (!(t33));
    if (t84 == 1)
        goto LAB42;

LAB43:    goto LAB40;

LAB42:    xsi_vlogvar_assign_value(t32, t31, 0, *((unsigned int *)t41), 1);
    goto LAB43;

LAB45:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t8), 1);
    goto LAB46;

LAB47:    t14 = *((unsigned int *)t41);
    t108 = (t14 + 0);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t24);
    t109 = (t15 - t16);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t9, t111, t108, *((unsigned int *)t24), t110);
    goto LAB48;

}


extern void work_m_00000000000498154322_4083936836_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000000498154322_4083936836", "isim/test5_isim_beh.exe.sim/work/m_00000000000498154322_4083936836.didat");
	xsi_register_executes(pe);
}
