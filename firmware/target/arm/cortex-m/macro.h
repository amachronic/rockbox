/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 *
 * Copyright (C) 2015 by the authors
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __ARM_CORTEX_M_MACRO_H__
#define __ARM_CORTEX_M_MACRO_H__

#include <stdint.h>

#define __VAR_OR1(prefix, suffix) \
    (prefix##suffix)
#define __VAR_OR2(pre, s1, s2) \
    (__VAR_OR1(pre, s1) | __VAR_OR1(pre, s2))
#define __VAR_OR3(pre, s1, s2, s3) \
    (__VAR_OR1(pre, s1) | __VAR_OR2(pre, s2, s3))
#define __VAR_OR4(pre, s1, s2, s3, s4) \
    (__VAR_OR2(pre, s1, s2) | __VAR_OR2(pre, s3, s4))
#define __VAR_OR5(pre, s1, s2, s3, s4, s5) \
    (__VAR_OR2(pre, s1, s2) | __VAR_OR3(pre, s3, s4, s5))
#define __VAR_OR6(pre, s1, s2, s3, s4, s5, s6) \
    (__VAR_OR3(pre, s1, s2, s3) | __VAR_OR3(pre, s4, s5, s6))
#define __VAR_OR7(pre, s1, s2, s3, s4, s5, s6, s7) \
    (__VAR_OR3(pre, s1, s2, s3) | __VAR_OR4(pre, s4, s5, s6, s7))
#define __VAR_OR8(pre, s1, s2, s3, s4, s5, s6, s7, s8) \
    (__VAR_OR4(pre, s1, s2, s3, s4) | __VAR_OR4(pre, s5, s6, s7, s8))
#define __VAR_OR9(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9) \
    (__VAR_OR4(pre, s1, s2, s3, s4) | __VAR_OR5(pre, s5, s6, s7, s8, s9))
#define __VAR_OR10(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10) \
    (__VAR_OR5(pre, s1, s2, s3, s4, s5) | __VAR_OR5(pre, s6, s7, s8, s9, s10))
#define __VAR_OR11(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11) \
    (__VAR_OR5(pre, s1, s2, s3, s4, s5) | __VAR_OR6(pre, s6, s7, s8, s9, s10, s11))
#define __VAR_OR12(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12) \
    (__VAR_OR6(pre, s1, s2, s3, s4, s5, s6) | __VAR_OR6(pre, s7, s8, s9, s10, s11, s12))
#define __VAR_OR13(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13) \
    (__VAR_OR6(pre, s1, s2, s3, s4, s5, s6) | __VAR_OR7(pre, s7, s8, s9, s10, s11, s12, s13))
#define __VAR_OR14(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14) \
    (__VAR_OR7(pre, s1, s2, s3, s4, s5, s6, s7) | __VAR_OR7(pre, s8, s9, s10, s11, s12, s13, s14))
#define __VAR_OR15(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15) \
    (__VAR_OR7(pre, s1, s2, s3, s4, s5, s6, s7) | __VAR_OR8(pre, s8, s9, s10, s11, s12, s13, s14, s15))
#define __VAR_OR16(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16) \
    (__VAR_OR8(pre, s1, s2, s3, s4, s5, s6, s7, s8) | __VAR_OR8(pre, s9, s10, s11, s12, s13, s14, s15, s16))
#define __VAR_OR17(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17) \
    (__VAR_OR8(pre, s1, s2, s3, s4, s5, s6, s7, s8) | __VAR_OR9(pre, s9, s10, s11, s12, s13, s14, s15, s16, s17))
#define __VAR_OR18(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18) \
    (__VAR_OR9(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9) | __VAR_OR9(pre, s10, s11, s12, s13, s14, s15, s16, s17, s18))
#define __VAR_OR19(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19) \
    (__VAR_OR9(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9) | __VAR_OR10(pre, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19))
#define __VAR_OR20(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20) \
    (__VAR_OR10(pre, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10) | __VAR_OR10(pre, s11, s12, s13, s14, s15, s16, s17, s18, s19, s20))

#define __VAR_NARGS(...) __VAR_NARGS_(__VA_ARGS__, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)
#define __VAR_NARGS_(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, N, ...) N

#define __VAR_EXPAND(macro, prefix, ...) __VAR_EXPAND_(macro, __VAR_NARGS(__VA_ARGS__), prefix, __VA_ARGS__)
#define __VAR_EXPAND_(macro, cnt, prefix, ...) __VAR_EXPAND__(macro, cnt, prefix, __VA_ARGS__)
#define __VAR_EXPAND__(macro, cnt, prefix, ...) __VAR_EXPAND___(macro##cnt, prefix, __VA_ARGS__)
#define __VAR_EXPAND___(macro, prefix, ...) macro(prefix, __VA_ARGS__)

#define CMIO_8_RO(op, name, ...)        CMIO_8_RO_##op(name, __VA_ARGS__)
#define CMIO_8_RO_RD(name, ...)         (*(const volatile uint8_t *)(CMA_##name))
#define CMIO_8_RO_WR(name, val)         _Static_assert(0, #name " is read-only")
#define CMIO_8_RO_RMW(name, vand, vor)  _Static_assert(0, #name " is read-only")
#define CMIO_8_RO_VAR(name, ...)        (*(const volatile uint8_t *)(CMA_##name))

#define CMIO_16_RO(op, name, ...)       CMIO_16_RO_##op(name, __VA_ARGS__)
#define CMIO_16_RO_RD(name, ...)        (*(const volatile uint16_t *)(CMA_##name))
#define CMIO_16_RO_WR(name, val)        _Static_assert(0, #name " is read-only")
#define CMIO_16_RO_RMW(name, vand, vor) _Static_assert(0, #name " is read-only")
#define CMIO_16_RO_VAR(name, ...)       (*(const volatile uint16_t *)(CMA_##name))

#define CMIO_32_RO(op, name, ...)       CMIO_32_RO_##op(name, __VA_ARGS__)
#define CMIO_32_RO_RD(name, ...)        (*(const volatile uint32_t *)(CMA_##name))
#define CMIO_32_RO_WR(name, val)        _Static_assert(0, #name " is read-only")
#define CMIO_32_RO_RMW(name, vand, vor) _Static_assert(0, #name " is read-only")
#define CMIO_32_RO_VAR(name, ...)       (*(const volatile uint32_t *)(CMA_##name))

#define CMIO_8_RW(op, name, ...)        CMIO_8_RW_##op(name, __VA_ARGS__)
#define CMIO_8_RW_RD(name, ...)         (*(volatile uint8_t *)(CMA_##name))
#define CMIO_8_RW_WR(name, val)         (*(volatile uint8_t *)(CMA_##name)) = (val)
#define CMIO_8_RW_RMW(name, vand, vor)  CMIO_8_RW_WR(name, (CMIO_8_RW_RD(name) & (vand)) | (vor))
#define CMIO_8_RW_VAR(name, ...)        (*(volatile uint8_t *)(CMA_##name))

#define CMIO_16_RW(op, name, ...)       CMIO_16_RW_##op(name, __VA_ARGS__)
#define CMIO_16_RW_RD(name, ...)        (*(volatile uint16_t *)(CMA_##name))
#define CMIO_16_RW_WR(name, val)        (*(volatile uint16_t *)(CMA_##name)) = (val)
#define CMIO_16_RW_RMW(name, vand, vor) CMIO_16_RW_WR(name, (CMIO_16_RW_RD(name) & (vand)) | (vor))
#define CMIO_16_RW_VAR(name, ...)       (*(volatile uint16_t *)(CMA_##name))

#define CMIO_32_RW(op, name, ...)       CMIO_32_RW_##op(name, __VA_ARGS__)
#define CMIO_32_RW_RD(name, ...)        (*(volatile uint32_t *)(CMA_##name))
#define CMIO_32_RW_WR(name, val)        (*(volatile uint32_t *)(CMA_##name)) = (val)
#define CMIO_32_RW_RMW(name, vand, vor) CMIO_32_RW_WR(name, (CMIO_32_RW_RD(name) & (vand)) | (vor))
#define CMIO_32_RW_VAR(name, ...)       (*(volatile uint32_t *)(CMA_##name))

#define CMIO_8_WO(op, name, ...)        CMIO_8_WO_##op(name, __VA_ARGS__)
#define CMIO_8_WO_RD(name, ...)         ({_Static_assert(0, #name " is write-only"); 0;})
#define CMIO_8_WO_WR(name, val)         (*(volatile uint8_t *)(CMA_##name)) = (val)
#define CMIO_8_WO_RMW(name, vand, vor)  CMIO_8_WO_WR(name, vor)
#define CMIO_8_WO_VAR(name, ...)        (*(volatile uint8_t *)(CMA_##name))

#define CMIO_16_WO(op, name, ...)       CMIO_16_WO_##op(name, __VA_ARGS__)
#define CMIO_16_WO_RD(name, ...)        ({_Static_assert(0, #name " is write-only"); 0;})
#define CMIO_16_WO_WR(name, val)        (*(volatile uint16_t *)(CMA_##name)) = (val)
#define CMIO_16_WO_RMW(name, vand, vor) CMIO_16_WO_WR(name, vor)
#define CMIO_16_WO_VAR(name, ...)       (*(volatile uint16_t *)(CMA_##name))

#define CMIO_32_WO(op, name, ...)       CMIO_32_WO_##op(name, __VA_ARGS__)
#define CMIO_32_WO_RD(name, ...)        ({_Static_assert(0, #name " is write-only"); 0;})
#define CMIO_32_WO_WR(name, val)        (*(volatile uint32_t *)(CMA_##name)) = (val)
#define CMIO_32_WO_RMW(name, vand, vor) CMIO_32_WO_WR(name, vor)
#define CMIO_32_WO_VAR(name, ...)       (*(volatile uint32_t *)(CMA_##name))


/** cm_orf
 *
 * usage: cm_orf(register, f1(v1), f2(v2), ...)
 *
 * effect: expands to the register value where each field fi has value vi.
 *         Informally: reg_f1(v1) | reg_f2(v2) | ...
 * note: enumerated values for fields can be obtained by using the syntax:
 *          f1_V(name)
 *
 * example: cm_orf(ICOLL_CTRL, SFTRST(1), CLKGATE(0), TZ_LOCK_V(UNLOCKED))
 */
#define cm_orf(reg, ...) __VAR_EXPAND(__VAR_OR, BF_##reg##_, __VA_ARGS__)

/** __cm_orfm
 *
 * usage: __cm_orfm(register, f1(v1), f2(v2), ...)
 *
 * effect: expands to the register value where each field fi has maximum value (vi is ignored).
 * note: internal usage
 *
 * example: __cm_orfm(ICOLL_CTRL, SFTRST(1), CLKGATE(0), TZ_LOCK_V(UNLOCKED))
 */
#define __cm_orfm(reg, ...) __VAR_EXPAND(__VAR_OR, BFM_##reg##_, __VA_ARGS__)

/** cm_orm
 *
 * usage: cm_orm(register, f1, f2, ...)
 *
 * effect: expands to the register value where each field fi is set to its maximum value.
 *         Informally: reg_f1_mask | reg_f2_mask | ...
 *
 * example: cm_orm(ICOLL_CTRL, SFTRST, CLKGATE)
 */
#define cm_orm(reg, ...) __VAR_EXPAND(__VAR_OR, BM_##reg##_, __VA_ARGS__)


/** cm_vreadf
 *
 * usage: cm_vreadf(value, register, field)
 *
 * effect: given a register value, return the value of a particular field
 * note: this macro does NOT read any register
 *
 * example: cm_vreadf(0xc0000000, ICOLL_CTRL, SFTRST)
 *          cm_vreadf(0x46ff, ICOLL_ENABLE, CPU0_PRIO)
 */
#define cm_vreadf(val, name, field) (((val) & BM_##name##_##field) >> BP_##name##_##field)

/** cm_vwritef
 *
 * usage: cm_vwritef(var, register, f1(v1), f2(v2), ...)
 *
 * effect: change the variable value so that field fi has value vi
 * note: this macro will perform a read-modify-write
 *
 * example: cm_vwritef(var, ICOLL_CTRL, SFTRST(1), CLKGATE(0), TZ_LOCK_V(UNLOCKED))
 *          cm_vwritef(var, ICOLL_ENABLE, CPU0_PRIO(1), CPU0_TYPE_V(FIQ))
 */
#define cm_vwritef(var, name, ...) (var) = cm_orf(name, __VA_ARGS__) | (~__cm_orfm(name, __VA_ARGS__) & (var))

/** cm_read
 *
 * usage: cm_read(register)
 *
 * effect: read the register and return its value
 * note: register must be fully qualified if indexed
 *
 * example: cm_read(ICOLL_STATUS)
 *          cm_read(ICOLL_ENABLE(42))
 */
#define cm_read(name) CMT_##name(RD, name)

/** cm_readf
 *
 * usage: cm_readf(register, field)
 *
 * effect: read a register and return the value of a particular field
 * note: register must be fully qualified if indexed
 *
 * example: cm_readf(ICOLL_CTRL, SFTRST)
 *          cm_readf(ICOLL_ENABLE(3), CPU0_PRIO)
 */
#define cm_readf(name, field) cm_readf_(cm_read(name), CMN_##name, field)
#define cm_readf_(...) cm_vreadf(__VA_ARGS__)

/** cm_write
 *
 * usage: cm_write(register, value)
 *
 * effect: write a register
 * note: register must be fully qualified if indexed
 *
 * example: cm_write(ICOLL_CTRL, 0x42)
 *          cm_write(ICOLL_ENABLE_SET(3), 0x37)
 */
#define cm_write(name, val) CMT_##name(WR, name, val)

/** cm_writef
 *
 * usage: cm_writef(register, f1(v1), f2(v2), ...)
 *
 * effect: change the register value so that field fi has value vi
 * note: register must be fully qualified if indexed
 * note: this macro may perform a read-modify-write
 *
 * example: cm_writef(ICOLL_CTRL, SFTRST(1), CLKGATE(0), TZ_LOCK_V(UNLOCKED))
 *          cm_writef(ICOLL_ENABLE(3), CPU0_PRIO(1), CPU0_TYPE_V(FIQ))
 */
#define cm_writef(name, ...) cm_writef_(name, CMN_##name, __VA_ARGS__)
#define cm_writef_(name, name2, ...) CMT_##name(RMW, name, ~__cm_orfm(name2, __VA_ARGS__), cm_orf(name2, __VA_ARGS__))

/** cm_overwritef
 *
 * usage: cm_overwritef(register, f1(v1), f2(v2), ...)
 *
 * effect: change the register value so that field fi has value vi and other fields have value zero
 *         thus this macro is equivalent to:
 *         cm_write(register, cm_orf(register, f1(v1), ...))
 * note: register must be fully qualified if indexed
 * note: this macro will overwrite the register (it is NOT a read-modify-write)
 *
 * example: cm_overwritef(ICOLL_CTRL, SFTRST(1), CLKGATE(0), TZ_LOCK_V(UNLOCKED))
 *          cm_overwritef(ICOLL_ENABLE(3), CPU0_PRIO(1), CPU0_TYPE_V(FIQ))
 */
#define cm_overwritef(name, ...) cm_overwritef_(name, CMN_##name, __VA_ARGS__)
#define cm_overwritef_(name, name2, ...) CMT_##name(WR, name, cm_orf(name2, __VA_ARGS__))

/** cm_setf
 *
 * usage: cm_setf(register, f1, f2, ...)
 *
 * effect: change the register value so that field fi has maximum value
 * note: this macro will perform a read-modify-write
 * note: register must be fully qualified if indexed
 *
 * example: cm_setf(ICOLL_CTRL, SFTRST, CLKGATE)
 *          cm_setf(ICOLL_ENABLE(3), CPU0_PRIO, CPU0_TYPE)
 */
#define cm_setf(name, ...) cm_setf_(name, CMN_##name, __VA_ARGS__)
#define cm_setf_(name, name2, ...) CMT_##name(RMW, name, ~0,cm_orm(name2, __VA_ARGS__))

/** cm_clrf
 *
 * usage: cm_clrf(register, f1, f2, ...)
 *
 * effect: change the register value so that field fi has value zero
 * note: this macro will perform a read-modify-write
 * note: register must be fully qualified if indexed
 *
 * example: cm_clrf(ICOLL_CTRL, SFTRST, CLKGATE)
 *          cm_clrf(ICOLL_ENABLE(3), CPU0_PRIO, CPU0_TYPE)
 */
#define cm_clrf(name, ...) cm_clrf_(name, CMN_##name, __VA_ARGS__)
#define cm_clrf_(name, name2, ...) CMT_##name(RMW, name, ~cm_orm(name2, __VA_ARGS__), 0)

/** cm_reg
 *
 * usage: cm_reg(register)
 *
 * effect: return a variable-like expression that can be read/written
 * note: register must be fully qualified if indexed
 * note: read-only registers will yield a constant expression
 *
 * example: unsigned x = cm_reg(ICOLL_STATUS)
 *          unsigned x = cm_reg(ICOLL_ENABLE(42))
 *          cm_reg(ICOLL_ENABLE(42)) = 64
 */
#define cm_reg(name) CMT_##name(VAR, name)


#endif /* __ARM_CORTEX_M_MACRO_H__*/
