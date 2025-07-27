/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (c) 2025 yetist <yetist@gmail.com>
 * 为 STC89C52RC 增加 P4 寄存器
 */

#ifndef STC89C52RC_H
#define STC89C52RC_H

#include <8052.h>     /* load definitions for the 8052 */

/* define stc89c52rc specific registers only */
__sfr __at (0xE8) P4;

__sbit __at (0xE8) P4_0;
__sbit __at (0xE9) P4_1;
__sbit __at (0xEA) P4_2;
__sbit __at (0xEB) P4_3;
__sbit __at (0xEC) P4_4;
__sbit __at (0xED) P4_5;
__sbit __at (0xEE) P4_6;
__sbit __at (0xEF) P4_7;

#endif
