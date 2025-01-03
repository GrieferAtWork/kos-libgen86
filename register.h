/* Copyright (c) 2019-2025 Griefer@Work                                       *
 *                                                                            *
 * This software is provided 'as-is', without any express or implied          *
 * warranty. In no event will the authors be held liable for any damages      *
 * arising from the use of this software.                                     *
 *                                                                            *
 * Permission is granted to anyone to use this software for any purpose,      *
 * including commercial applications, and to alter it and redistribute it     *
 * freely, subject to the following restrictions:                             *
 *                                                                            *
 * 1. The origin of this software must not be misrepresented; you must not    *
 *    claim that you wrote the original software. If you use this software    *
 *    in a product, an acknowledgement (see the following) in the product     *
 *    documentation is required:                                              *
 *    Portions Copyright (c) 2019-2025 Griefer@Work                           *
 * 2. Altered source versions must be plainly marked as such, and must not be *
 *    misrepresented as being the original software.                          *
 * 3. This notice may not be removed or altered from any source distribution. *
 */
#ifndef _LIBGEN86_REGISTER_H
#define _LIBGEN86_REGISTER_H 1

#include "api.h"

/* Register indices */
#define GEN86_R_AL   0  /* Accumulator. (lower byte) */
#define GEN86_R_CL   1  /* Counter register. (lower byte) */
#define GEN86_R_DL   2  /* General purpose d-register. (lower byte) */
#define GEN86_R_BL   3  /* General purpose b-register. (lower byte) */
#define GEN86_R_AH   4  /* Accumulator. (upper byte; used when _NO_ REX prefix is given) */
#define GEN86_R_CH   5  /* Counter register. (upper byte; used when _NO_ REX prefix is given) */
#define GEN86_R_DH   6  /* General purpose d-register. (upper byte; used when _NO_ REX prefix is given) */
#define GEN86_R_BH   7  /* General purpose b-register. (upper byte; used when _NO_ REX prefix is given) */
#if LIBGEN86_TARGET_BITS >= 64
#define GEN86_R_SPL  (0x10 | 4)  /* Stack pointer. (lower byte; used when _ANY_ REX prefix is given) */
#define GEN86_R_BPL  (0x10 | 5)  /* Stack base pointer. (lower byte; used when _ANY_ REX prefix is given) */
#define GEN86_R_SIL  (0x10 | 6)  /* Source pointer. (lower byte; used when _ANY_ REX prefix is given) */
#define GEN86_R_DIL  (0x10 | 7)  /* Destination pointer. (lower byte; used when _ANY_ REX prefix is given) */
#define GEN86_R_R8L  (0x10 | 8)  /* %r8l */
#define GEN86_R_R9L  (0x10 | 9)  /* %r9l */
#define GEN86_R_R10L (0x10 | 10) /* %r10l */
#define GEN86_R_R11L (0x10 | 11) /* %r11l */
#define GEN86_R_R12L (0x10 | 12) /* %r12l */
#define GEN86_R_R13L (0x10 | 13) /* %r13l */
#define GEN86_R_R14L (0x10 | 14) /* %r14l */
#define GEN86_R_R15L (0x10 | 15) /* %r15l */
#endif /* LIBGEN86_TARGET_BITS >= 64 */

#define GEN86_R_AX   0  /* Accumulator. */
#define GEN86_R_CX   1  /* Counter register. */
#define GEN86_R_DX   2  /* General purpose d-register. */
#define GEN86_R_BX   3  /* General purpose b-register. */
#define GEN86_R_SP   4  /* Stack pointer. */
#define GEN86_R_BP   5  /* Stack base pointer. */
#define GEN86_R_SI   6  /* Source pointer. */
#define GEN86_R_DI   7  /* Destination pointer. */
#if LIBGEN86_TARGET_BITS >= 64
#define GEN86_R_R8W  8  /* %r8w */
#define GEN86_R_R9W  9  /* %r9w */
#define GEN86_R_R10W 10 /* %r10w */
#define GEN86_R_R11W 11 /* %r11w */
#define GEN86_R_R12W 12 /* %r12w */
#define GEN86_R_R13W 13 /* %r13w */
#define GEN86_R_R14W 14 /* %r14w */
#define GEN86_R_R15W 15 /* %r15w */
#endif /* LIBGEN86_TARGET_BITS >= 64 */

#if LIBGEN86_TARGET_BITS >= 32
#define GEN86_R_EAX  0  /* Accumulator. */
#define GEN86_R_ECX  1  /* Counter register. */
#define GEN86_R_EDX  2  /* General purpose d-register. */
#define GEN86_R_EBX  3  /* General purpose b-register. */
#define GEN86_R_ESP  4  /* Stack pointer. */
#define GEN86_R_EBP  5  /* Stack base pointer. */
#define GEN86_R_ESI  6  /* Source pointer. */
#define GEN86_R_EDI  7  /* Destination pointer. */
#if LIBGEN86_TARGET_BITS >= 64
#define GEN86_R_R8D  8  /* %r8d */
#define GEN86_R_R9D  9  /* %r9d */
#define GEN86_R_R10D 10 /* %r10d */
#define GEN86_R_R11D 11 /* %r11d */
#define GEN86_R_R12D 12 /* %r12d */
#define GEN86_R_R13D 13 /* %r13d */
#define GEN86_R_R14D 14 /* %r14d */
#define GEN86_R_R15D 15 /* %r15d */
#endif /* LIBGEN86_TARGET_BITS >= 64 */

#if LIBGEN86_TARGET_BITS >= 64
#define GEN86_R_RAX 0  /* Accumulator. */
#define GEN86_R_RCX 1  /* Counter register. */
#define GEN86_R_RDX 2  /* General purpose d-register. */
#define GEN86_R_RBX 3  /* General purpose b-register. */
#define GEN86_R_RSP 4  /* Stack pointer. */
#define GEN86_R_RBP 5  /* Stack base pointer. */
#define GEN86_R_RSI 6  /* Source pointer. */
#define GEN86_R_RDI 7  /* Destination pointer. */
#define GEN86_R_R8  8  /* %r8 */
#define GEN86_R_R9  9  /* %r9 */
#define GEN86_R_R10 10 /* %r10 */
#define GEN86_R_R11 11 /* %r11 */
#define GEN86_R_R12 12 /* %r12 */
#define GEN86_R_R13 13 /* %r13 */
#define GEN86_R_R14 14 /* %r14 */
#define GEN86_R_R15 15 /* %r15 */
#endif /* LIBGEN86_TARGET_BITS >= 64 */
#endif /* LIBGEN86_TARGET_BITS >= 32 */

#define GEN86_R_ES 0 /* %es */
#define GEN86_R_CS 1 /* %cs */
#define GEN86_R_SS 2 /* %ss */
#define GEN86_R_DS 3 /* %ds */
#define GEN86_R_FS 4 /* %fs */
#define GEN86_R_GS 5 /* %gs */

#if LIBGEN86_TARGET_BITS == 64
#define GEN86_REX_B 1 /* The REX.B flag (1-bit extension to MODRM.rm). */
#define GEN86_REX_X 2 /* The REX.X flag (1-bit extension to SIB.index). */
#define GEN86_REX_R 4 /* The REX.R flag (1-bit extension to MODRM.reg). */
#define GEN86_REX_W 8 /* The REX.W flag (Indicates 64-bit operands). */
#endif /* LIBGEN86_TARGET_BITS == 64 */


/* Portable register names */
#if LIBGEN86_TARGET_BITS == 64
#define GEN86_R_PAX GEN86_R_RAX /* Accumulator. */
#define GEN86_R_PCX GEN86_R_RCX /* Counter register. */
#define GEN86_R_PDX GEN86_R_RDX /* General purpose d-register. */
#define GEN86_R_PBX GEN86_R_RBX /* General purpose b-register. */
#define GEN86_R_PSP GEN86_R_RSP /* Stack pointer. */
#define GEN86_R_PBP GEN86_R_RBP /* Stack base pointer. */
#define GEN86_R_PSI GEN86_R_RSI /* Source pointer. */
#define GEN86_R_PDI GEN86_R_RDI /* Destination pointer. */
#elif LIBGEN86_TARGET_BITS == 32
#define GEN86_R_PAX GEN86_R_EAX /* Accumulator. */
#define GEN86_R_PCX GEN86_R_ECX /* Counter register. */
#define GEN86_R_PDX GEN86_R_EDX /* General purpose d-register. */
#define GEN86_R_PBX GEN86_R_EBX /* General purpose b-register. */
#define GEN86_R_PSP GEN86_R_ESP /* Stack pointer. */
#define GEN86_R_PBP GEN86_R_EBP /* Stack base pointer. */
#define GEN86_R_PSI GEN86_R_ESI /* Source pointer. */
#define GEN86_R_PDI GEN86_R_EDI /* Destination pointer. */
#else /* LIBGEN86_TARGET_BITS == ... */
#define GEN86_R_PAX GEN86_R_AX  /* Accumulator. */
#define GEN86_R_PCX GEN86_R_CX  /* Counter register. */
#define GEN86_R_PDX GEN86_R_DX  /* General purpose d-register. */
#define GEN86_R_PBX GEN86_R_BX  /* General purpose b-register. */
#define GEN86_R_PSP GEN86_R_SP  /* Stack pointer. */
#define GEN86_R_PBP GEN86_R_BP  /* Stack base pointer. */
#define GEN86_R_PSI GEN86_R_SI  /* Source pointer. */
#define GEN86_R_PDI GEN86_R_DI  /* Destination pointer. */
#endif /* LIBGEN86_TARGET_BITS != ... */


/* Register names for FCALL functions */
#if LIBGEN86_TARGET_BITS == 64
#define GEN86_R_FCALL0B GEN86_R_DIL
#define GEN86_R_FCALL0W GEN86_R_DI
#define GEN86_R_FCALL0L GEN86_R_EDI
#define GEN86_R_FCALL0Q GEN86_R_RDI
#define GEN86_R_FCALL0P GEN86_R_RDI
#define GEN86_R_FCALL1B GEN86_R_SIL
#define GEN86_R_FCALL1W GEN86_R_SI
#define GEN86_R_FCALL1L GEN86_R_RSI
#define GEN86_R_FCALL1Q GEN86_R_RSI
#define GEN86_R_FCALL1P GEN86_R_RSI
#elif LIBGEN86_TARGET_BITS == 32
#define GEN86_R_FCALL0B GEN86_R_CL
#define GEN86_R_FCALL0W GEN86_R_CX
#define GEN86_R_FCALL0L GEN86_R_ECX
#define GEN86_R_FCALL0P GEN86_R_ECX
#define GEN86_R_FCALL1B GEN86_R_DL
#define GEN86_R_FCALL1W GEN86_R_DX
#define GEN86_R_FCALL1L GEN86_R_EDX
#define GEN86_R_FCALL1P GEN86_R_EDX
#endif /* LIBGEN86_TARGET_BITS != ... */



#define GEN86_MODRM_MOD_MASK  0xc0 /* 0b11000000 */
#define GEN86_MODRM_REG_MASK  0x38 /* 0b00111000 */
#define GEN86_MODRM_RM_MASK   0x07 /* 0b00000111 */
#define GEN86_MODRM_MOD_SHIFT 6
#define GEN86_MODRM_REG_SHIFT 3
#define GEN86_MODRM_RM_SHIFT  0

#ifdef __CC__
#include <hybrid/__unaligned.h>
#define _gen86_voidcast             (void)
#define _gen86_noop                 (void)0
#define _gen86_fitsb(value)         ((__INT8_TYPE__)(value) == (value))
#if LIBGEN86_TARGET_BITS == 64
#define _gen86_fitsl(value)                                      \
	((__INT32_TYPE__)(__INT64_TYPE__)(__UINT64_TYPE__)(value) == \
	 (__INT64_TYPE__)(__UINT64_TYPE__)(value))
#endif /* LIBGEN86_TARGET_BITS != 64 */
#define _gen86_pcrelval(p_pc, addr) (__INTPTR_TYPE__)((__UINTPTR_TYPE__)(addr) - (__UINTPTR_TYPE__)(*(p_pc)))
#ifndef _gen86_putb
#define _gen86_putb(p_pc, b)        (void)(**(p_pc) = (__UINT8_TYPE__)(b), ++*(p_pc))
#define _gen86_putsb(p_pc, b)       (void)(**(p_pc) = (__UINT8_TYPE__)(__INT8_TYPE__)(b), ++*(p_pc))
#define _gen86_putw(p_pc, w)        (void)(__hybrid_unaligned_setle16(*(p_pc), (__UINT16_TYPE__)(w)), *(p_pc) += 2)
#define _gen86_putsw(p_pc, w)       (void)(__hybrid_unaligned_setle16(*(p_pc), (__UINT16_TYPE__)(__INT16_TYPE__)(w)), *(p_pc) += 2)
#define _gen86_putl(p_pc, l)        (void)(__hybrid_unaligned_setle32(*(p_pc), (__UINT32_TYPE__)(l)), *(p_pc) += 4)
#define _gen86_putsl(p_pc, l)       (void)(__hybrid_unaligned_setle32(*(p_pc), (__UINT32_TYPE__)(__INT32_TYPE__)(l)), *(p_pc) += 4)
#define _gen86_putq(p_pc, q)        (void)(__hybrid_unaligned_setle64(*(p_pc), (__UINT64_TYPE__)(q)), *(p_pc) += 8)
#define _gen86_putb2(p_pc, b1, b2)  _gen86_putw(p_pc, (__UINT16_TYPE__)(b2) << 8 | (b1))
#endif /* !_gen86_putb */
#else /* __CC__ */
#ifndef _gen86_voidcast
#define _gen86_voidcast /* nothing */
#endif /* !_gen86_voidcast */
#ifndef _gen86_noop
#define _gen86_noop 0
#endif /* !_gen86_noop */
#endif /* !__CC__ */

/* Check if `value' fits into a signed 8-bit integer */
#ifndef _gen86_fitsb
#include <hybrid/limitcore.h>
#define _gen86_fitsb(value) ((value) >= __INT8_MIN__ && (value) <= __INT8_MAX__)
#endif /* !_gen86_fitsb */

#if LIBGEN86_TARGET_BITS == 64
/* Check if `value' fits into a signed 32-bit integer */
#ifndef _gen86_fitsl
#include <hybrid/limitcore.h>
#define _gen86_fitsl(value) ((value) >= __INT32_MIN__ && (value) <= __INT32_MAX__)
#endif /* !_gen86_fitsl */
#endif /* LIBGEN86_TARGET_BITS != 64 */

#ifndef _gen86_putsb
#define _gen86_putsb(p_pc, b) _gen86_putb(p_pc, b)
#endif /* !_gen86_putsb */
#ifndef _gen86_putw
#define _gen86_putw(p_pc, w)  (_gen86_putb(p_pc, (w) & 0xff), _gen86_putb(p_pc, ((w) >> 8) & 0xff))
#define _gen86_putsw(p_pc, w) (_gen86_putb(p_pc, (w) & 0xff), _gen86_putb(p_pc, ((w) >> 8) & 0xff))
#endif /* !_gen86_putw */
#ifndef _gen86_putl
#define _gen86_putl(p_pc, l)  (_gen86_putw(p_pc, (l) & 0xffff), _gen86_putw(p_pc, ((l) >> 16) & 0xffff))
#define _gen86_putsl(p_pc, l) (_gen86_putw(p_pc, (l) & 0xffff), _gen86_putw(p_pc, ((l) >> 16) & 0xffff))
#endif /* !_gen86_putl */
#ifndef _gen86_putq
#define _gen86_putq(p_pc, ql)  (_gen86_putl(p_pc, (q) & 0xffffffff), _gen86_putl(p_pc, ((q) >> 32) & 0xffffffff))
#endif /* !_gen86_putq */


#ifndef _gen86_putb2
#define _gen86_putb2(p_pc, b1, b2) (_gen86_putb(p_pc, b1), _gen86_putb(p_pc, b2))
#endif /* !_gen86_putb2 */
#ifndef _gen86_putb3
#define _gen86_putb3(p_pc, b1, b2, b3) (_gen86_putb2(p_pc, b1, b2), _gen86_putb(p_pc, b3))
#endif /* !_gen86_putb3 */


#ifdef _gen86_pcrelval
#define _gen86_putsb_pcrel(p_pc, addr) _gen86_putsb(p_pc, _gen86_pcrelval(p_pc, addr) - 1)
#define _gen86_putsw_pcrel(p_pc, addr) _gen86_putsw(p_pc, _gen86_pcrelval(p_pc, addr) - 2)
#define _gen86_putsl_pcrel(p_pc, addr) _gen86_putsl(p_pc, _gen86_pcrelval(p_pc, addr) - 4)
#endif /* _gen86_pcrelval */

#if LIBGEN86_TARGET_BITS == 64
#define _gen86_regmsk(reg) ((reg)&7)
#else /* LIBGEN86_TARGET_BITS == 64 */
#define _gen86_regmsk /* nothing */
#endif /* LIBGEN86_TARGET_BITS != 64 */

#define _gen86_modrm(p_pc, mod, reg, rm)                            \
	_gen86_putb(p_pc, (mod) << GEN86_MODRM_MOD_SHIFT |              \
	                  _gen86_regmsk(reg) << GEN86_MODRM_REG_SHIFT | \
	                  _gen86_regmsk(rm) /* << GEN86_MODRM_RM_SHIFT*/)

#if LIBGEN86_TARGET_BITS == 64
#define _gen86_rex_(p_pc, _rex, reg, rm, index)                      \
	(!(_rex) && !((reg)&0x18) && !((rm)&0x18) && !((index)&0x18)) || \
	(_gen86_putb(p_pc, 0x40 | (_rex) |                               \
	                   ((rm)&8 ? GEN86_REX_B : 0) |                  \
	                   ((index)&8 ? GEN86_REX_X : 0) |               \
	                   ((reg)&8 ? GEN86_REX_R : 0)),                 \
	 0),
#else /* LIBGEN86_TARGET_BITS == 64 */
#define _gen86_rex_(p_pc, _rex, reg, rm, index) /* nothing */
#endif /* LIBGEN86_TARGET_BITS != 64 */


/* MODR/M Naming conventions:
 *   b: Base
 *   i: Index
 *   d: Disp
 *   r: Register
 *   p: Pc-relative disp
 */

/* NOTE: All `gen86_modrm_*' macros must be callable like:
 *   gen86_modrm_*(p_pc, _rex, _putinstr, reg, ..., _putimm, _immsiz)
 * With:
 *   - `byte_t **p_pc'   -- Output buffer
 *   - `uint8_t _rex'    -- Ignored on non-64-bit; either `0' or `GEN86_REX_W'
 *   - `_putinstr'       -- Expands to code which generates the actual opcode
 *   - `reg'             -- 0-7: The value for `GEN86_MODRM_REG_MASK'
 *   - `...'             -- Variable # of arguments (at least 1), based
 *                          on which  modrm  encoding  is  being  used.
 *   - `_putimm'         -- Expands to code which generates immediate operands
 *   - `_immsiz'         -- Number of bytes written by `_putimm'
 */


/* <instr> %reg, %rm */
#define gen86_modrm_r(args) _gen86_modrm_r args
#define _gen86_modrm_r(p_pc, _rex, _putinstr, reg, rm, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, rm, 0) _putinstr,       \
	                _gen86_modrm(p_pc, 3, reg, rm), _putimm)


#if LIBGEN86_TARGET_BITS == 64
/* <instr> %reg, ipoff32s(%rip) */
#define gen86_modrm_prel(args) _gen86_modrm_p args
#define _gen86_modrm_prel(p_pc, _rex, _putinstr, reg, ipoff32s, _putimm, _immsiz)  \
	(_gen86_rex_(p_pc, _rex, reg, 0, 0), _putinstr, _gen86_modrm(p_pc, 0, reg, 5), \
	 _gen86_putsl(p_pc, ipoff32s), _putimm)

/* <instr> %reg, disp    # Address of `disp'  is encoded  PC-relative
 *                       # to the proper location offset from `*p_pc' */
#define gen86_modrm_p(args) _gen86_modrm_p args
#define _gen86_modrm_p(p_pc, _rex, _putinstr, reg, disp, _putimm, _immsiz)               \
	(_gen86_rex_(p_pc, _rex, reg, 0, 0), _putinstr, _gen86_modrm(p_pc, 0, reg, 5),       \
	 _gen86_putsl(p_pc, (__INTPTR_TYPE__)((__UINTPTR_TYPE__)(disp) -                     \
	                                      ((__UINTPTR_TYPE__)*(p_pc) + 4 + (_immsiz)))), \
	 _putimm)
#endif /* LIBGEN86_TARGET_BITS == 64 */


/* <instr> %reg, disp16  # NOTE: `disp16' is unsigned! */
#define gen86_modrm16_d(args) _gen86_modrm16_d args
#define _gen86_modrm16_d(p_pc, _rex, _putinstr, reg, disp16, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, 0, 0) _putinstr,              \
	                _gen86_modrm(p_pc, 0, reg, 6), _gen86_putw(p_pc, disp16),  \
	                _putimm)


#if LIBGEN86_TARGET_BITS >= 32

/* <instr> %reg, disp32s  # NOTE: `disp32s' is signed! */
#define gen86_modrm32_d(args) _gen86_modrm32_d args
#if LIBGEN86_TARGET_BITS == 64
#define _gen86_modrm32_d(p_pc, _rex, _putinstr, reg, disp32s, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, 0, 0) _putinstr,               \
	                _gen86_modrm(p_pc, 0, reg, 4),                              \
	                _gen86_modrm(p_pc, 0, 4, 5), /* SIB */                      \
	                _gen86_putsl(p_pc, disp32s),                                \
	                _putimm)
#else /* LIBGEN86_TARGET_BITS == 64 */
#define _gen86_modrm32_d(p_pc, _rex, _putinstr, reg, disp32s, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, 0, 0) _putinstr,               \
	                _gen86_modrm(p_pc, 0, reg, 5), _gen86_putsl(p_pc, disp32s), \
	                _putimm)
#endif /* LIBGEN86_TARGET_BITS != 64 */
#endif /* LIBGEN86_TARGET_BITS >= 32 */


/* <instr> %reg, disp */
#define gen86_modrm_d(args) _gen86_modrm_d args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_d(p_pc, _rex, _putinstr, reg, disp, _putimm, _immsiz) \
	_gen86_modrm16_d(p_pc, _rex, _putinstr, reg, disp, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_d(p_pc, _rex, _putinstr, reg, disp, _putimm, _immsiz) \
	_gen86_modrm32_d(p_pc, _rex, _putinstr, reg, disp, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */



#define _gen86_modrm16_b_rmofbreg(breg) \
	((breg) == GEN86_R_SI ? 4 : (breg) == GEN86_R_DI ? 5 : (breg) == GEN86_R_BP ? 6 : (breg) == GEN86_R_BX ? 7 : (__builtin_unreachable(), 0))
#define _gen86_modrm16_b_rmofbreg_mod0(breg) \
	((breg) == GEN86_R_SI ? 4 : (breg) == GEN86_R_DI ? 5 : (breg) == GEN86_R_BX ? 7 : (__builtin_unreachable(), 0))

/* <instr> %reg, (%breg)   # `%breg' must be `%si', `%di', `%bp' or `%bx' */
#define gen86_modrm16_b(args) _gen86_modrm16_b args
#define _gen86_modrm16_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz)                           \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                                   \
	                _gen86_regmsk(breg) == GEN86_R_BP                                                  \
	                ? (_gen86_modrm(p_pc, 1, reg, 6), _gen86_putsb(p_pc, 0))                           \
	                : _gen86_modrm(p_pc, 0, reg, _gen86_modrm16_b_rmofbreg_mod0(_gen86_regmsk(breg))), \
	                _putimm)


#if LIBGEN86_TARGET_BITS >= 32
/* <instr> %reg, (%breg) */
#define gen86_modrm32_b(args) _gen86_modrm32_b(args)
#define _gen86_modrm32_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,         \
	                _gen86_regmsk(breg) == GEN86_R_EBP                       \
	                ? (_gen86_modrm(p_pc, 1, reg, GEN86_R_EBP),              \
	                   _gen86_putsb(p_pc, 0))                                \
	                : _gen86_regmsk(breg) == GEN86_R_ESP                     \
	                  ? (_gen86_modrm(p_pc, 0, reg, 4),                      \
	                     _gen86_modrm(p_pc, 0, 4, GEN86_R_ESP))              \
	                  : _gen86_modrm(p_pc, 0, reg, breg),                    \
	                _putimm)
#endif /* LIBGEN86_TARGET_BITS >= 32 */



/* <instr> %reg, (%breg) */
#define gen86_modrm_b(args) _gen86_modrm_b args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz) \
	_gen86_modrm16_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz) \
	_gen86_modrm32_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */


/* <instr> %reg, disp8s(%breg)   # `disp8s' must `int8_t' */
#define gen86_modrm16_d8b(args) _gen86_modrm16_d8b args
#define _gen86_modrm16_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                   \
	                _gen86_modrm(p_pc, 1, reg, _gen86_modrm16_b_rmofbreg(breg)),       \
	                _gen86_putsb(p_pc, disp8s), _putimm)

/* <instr> %reg, disp16(%breg)   # `disp16' must `uint16_t' */
#define gen86_modrm16_d16b(args) _gen86_modrm16_d16b args
#define _gen86_modrm16_d16b(p_pc, _rex, _putinstr, reg, disp16, breg, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                    \
	                _gen86_modrm(p_pc, 2, reg, _gen86_modrm16_b_rmofbreg(breg)),        \
	                _gen86_putw(p_pc, disp16), _putimm)

/* <instr> %reg, disp(%breg)     # Autoselect optimal encoding for `disp' */
#define gen86_modrm16_db(args) _gen86_modrm16_db args
#define _gen86_modrm16_db(p_pc, _rex, _putinstr, reg, disp, breg, _putimm, _immsiz)     \
	(_gen86_fitsb(disp)                                                                 \
	 ? ((disp) == 0                                                                     \
	    ? _gen86_modrm16_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz)          \
	    : _gen86_modrm16_d8b(p_pc, _rex, _putinstr, reg, disp, breg, _putimm, _immsiz)) \
	 : _gen86_modrm16_d16b(p_pc, _rex, _putinstr, reg, disp, breg, _putimm, _immsiz))



#if LIBGEN86_TARGET_BITS >= 32
/* <instr> %reg, disp8s(%breg)    # `disp8s' must `int8_t' */
#define gen86_modrm32_d8b(args) _gen86_modrm32_d8b args
#define _gen86_modrm32_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                   \
	                _gen86_regmsk(breg) == GEN86_R_ESP                                 \
	                ? (_gen86_modrm(p_pc, 1, reg, 4),                                  \
	                   _gen86_modrm(p_pc, 0, 4, GEN86_R_ESP))                          \
	                : _gen86_modrm(p_pc, 1, reg, breg),                                \
	                _gen86_putsb(p_pc, disp8s), _putimm)

/* <instr> %reg, disp32s(%breg)   # `disp32s' must `int32_t' */
#define gen86_modrm32_d32b(args) _gen86_modrm32_d32b args
#define _gen86_modrm32_d32b(p_pc, _rex, _putinstr, reg, disp32s, breg, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                     \
	                _gen86_regmsk(breg) == GEN86_R_ESP                                   \
	                ? (_gen86_modrm(p_pc, 2, reg, 4),                                    \
	                   _gen86_modrm(p_pc, 0, 4, GEN86_R_ESP))                            \
	                : _gen86_modrm(p_pc, 2, reg, breg),                                  \
	                _gen86_putsl(p_pc, disp32s), _putimm)

/* <instr> %reg, disp32s(%breg)   # `disp32s' must `int32_t'; Autoselect optimal encoding for `disp' */
#define gen86_modrm32_db(args) _gen86_modrm32_db args
#define _gen86_modrm32_db(p_pc, _rex, _putinstr, reg, disp32s, breg, _putimm, _immsiz)     \
	(_gen86_fitsb(disp32s)                                                                 \
	 ? ((disp32s) == 0                                                                     \
	    ? _gen86_modrm32_b(p_pc, _rex, _putinstr, reg, breg, _putimm, _immsiz)             \
	    : _gen86_modrm32_d8b(p_pc, _rex, _putinstr, reg, disp32s, breg, _putimm, _immsiz)) \
	 : _gen86_modrm32_d32b(p_pc, _rex, _putinstr, reg, disp32s, breg, _putimm, _immsiz))
#endif /* LIBGEN86_TARGET_BITS >= 32 */



/* <instr> %reg, disp8s(%breg)    # `disp8s' must `int8_t' */
#define gen86_modrm_d8b(args) _gen86_modrm_d8b args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz) \
	_gen86_modrm16_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz) \
	_gen86_modrm32_d8b(p_pc, _rex, _putinstr, reg, disp8s, breg, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */

/* <instr> %reg, disps(%breg)    # `disps' must `int16_t' (in 16-bit mode) or `int32_t' */
#define gen86_modrm_db(args) _gen86_modrm_db args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_db(p_pc, _rex, _putinstr, reg, disps, breg, _putimm, _immsiz) \
	_gen86_modrm16_db(p_pc, _rex, _putinstr, reg, disps, breg, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_db(p_pc, _rex, _putinstr, reg, disps, breg, _putimm, _immsiz) \
	_gen86_modrm32_db(p_pc, _rex, _putinstr, reg, disps, breg, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */


#define _gen86_modrm16_bi_ispair(breg, index, a, b) \
	(((breg) == (a) && (index) == (b)) || ((breg) == (b) && (index) == (a)))
#define _gen86_modrm16_bi_rmofbreg(breg, index)                          \
	(_gen86_modrm16_bi_ispair(breg, index, GEN86_R_BX, GEN86_R_SI) ? 0 : \
	 _gen86_modrm16_bi_ispair(breg, index, GEN86_R_BX, GEN86_R_DI) ? 1 : \
	 _gen86_modrm16_bi_ispair(breg, index, GEN86_R_BP, GEN86_R_SI) ? 2 : \
	 _gen86_modrm16_bi_ispair(breg, index, GEN86_R_BP, GEN86_R_DI) ? 3 : \
	 (__builtin_unreachable(), 0))

/* <instr> %reg, (%breg,%index)  # `breg' and `index' must be pairs of [bx,si], [bx,di], [bp,si] or [bp,di] */
#define gen86_modrm16_bi(args) _gen86_modrm16_bi args
#define _gen86_modrm16_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz)     \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                     \
	                _gen86_modrm(p_pc, 0, reg, _gen86_modrm16_bi_rmofbreg(breg, index)), \
	                _putimm)

/* <instr> %reg, disp8s(%breg,%index)  # `breg' and `index' must be pairs of [bx,si], [bx,di], [bp,si] or [bp,di] */
#define gen86_modrm16_d8bi(args) _gen86_modrm16_d8bi args
#define _gen86_modrm16_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                           \
	                _gen86_modrm(p_pc, 1, reg, _gen86_modrm16_bi_rmofbreg(breg, index)),       \
	                _gen86_putsb(p_pc, disp8s), _putimm)

/* <instr> %reg, disp16(%breg,%index)  # `breg' and `index' must be pairs of [bx,si], [bx,di], [bp,si] or [bp,di] */
#define gen86_modrm16_d16bi(args) _gen86_modrm16_d16bi args
#define _gen86_modrm16_d16bi(p_pc, _rex, _putinstr, reg, disp16, breg, index, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                            \
	                _gen86_modrm(p_pc, 2, reg, _gen86_modrm16_bi_rmofbreg(breg, index)),        \
	                _gen86_putw(p_pc, disp16), _putimm)

/* <instr> %reg, disp(%breg,%index)    # Autoselect optimal encoding for `disp' */
#define gen86_modrm16_dbi(args) _gen86_modrm16_dbi args
#define _gen86_modrm16_dbi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz)     \
	(_gen86_fitsb(disp)                                                                         \
	 ? ((disp) == 0                                                                             \
	    ? _gen86_modrm16_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz)          \
	    : _gen86_modrm16_d8bi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz)) \
	 : _gen86_modrm16_d16bi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz))



#if LIBGEN86_TARGET_BITS >= 32

/* <instr> %reg, (%breg,%index) */
#define gen86_modrm32_bi(args) _gen86_modrm32_bi args
#define _gen86_modrm32_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_bis(p_pc, _rex, _putinstr, reg, breg, index, 1, _putimm, _immsiz)

/* <instr> %reg, disp8s(%breg,%index) */
#define gen86_modrm32_d8bi(args) _gen86_modrm32_d8bi args
#define _gen86_modrm32_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_d8bis(p_pc, _rex, _putinstr, reg, disp8s, breg, index, 1, _putimm, _immsiz)

/* <instr> %reg, disp32s(,%index) */
#define gen86_modrm32_d32i(args) _gen86_modrm32_d32i args
#define _gen86_modrm32_d32i(p_pc, _rex, _putinstr, reg, disp32s, index, _putimm, _immsiz) \
	_gen86_modrm32_d32is(p_pc, _rex, _putinstr, reg, disp32s, index, 1, _putimm, _immsiz)

/* <instr> %reg, disp32s(%breg,%index) */
#define gen86_modrm32_d32bi(args) _gen86_modrm32_d32bi args
#define _gen86_modrm32_d32bi(p_pc, _rex, _putinstr, reg, disp32s, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_d32bis(p_pc, _rex, _putinstr, reg, disp32s, breg, index, 1, _putimm, _immsiz)

#define _gen86_modrm32_scaleval(scale) \
	((scale) == 1 ? 0 : (scale) == 2 ? 1 : (scale) == 4 ? 2 : (scale) == 8 ? 3 : (__builtin_unreachable(), 0))


/* <instr> %reg, (%breg,%index,scale) */
#define gen86_modrm32_bis(args) _gen86_modrm32_bis args
#define _gen86_modrm32_bis(p_pc, _rex, _putinstr, reg, breg, index, scale, _putimm, _immsiz)         \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                                 \
	                (breg) == 5 ? (_gen86_modrm(p_pc, 1, reg, 4),                                    \
	                               _gen86_modrm(p_pc, _gen86_modrm32_scaleval(scale), index, 5),     \
	                               _gen86_putsb(p_pc, 0))                                            \
	                            : (_gen86_modrm(p_pc, 0, reg, 4),                                    \
	                               _gen86_modrm(p_pc, _gen86_modrm32_scaleval(scale), index, breg)), \
	                _putimm)

/* <instr> %reg, disp8s(%breg,%index,scale) */
#define gen86_modrm32_d8bis(args) _gen86_modrm32_d8bis args
#define _gen86_modrm32_d8bis(p_pc, _rex, _putinstr, reg, disp8s, breg, index, scale, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                                   \
	                _gen86_modrm(p_pc, 1, reg, 4),                                                     \
	                _gen86_modrm(p_pc, _gen86_modrm32_scaleval(scale), index, breg),                   \
	                _gen86_putsb(p_pc, disp8s), _putimm)

/* <instr> %reg, disps(,%index,scale) */
#define gen86_modrm32_d32is(args) _gen86_modrm32_d32is args
#define _gen86_modrm32_d32is(p_pc, _rex, _putinstr, reg, disps, index, scale, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, 0, 0) _putinstr,                               \
	                _gen86_modrm(p_pc, 0, reg, 4),                                              \
	                _gen86_modrm(p_pc, _gen86_modrm32_scaleval(scale), index, 5),               \
	                _gen86_putsl(p_pc, disps),                                                  \
	                _putimm)

/* <instr> %reg, disp32s(%breg,%index,scale) */
#define gen86_modrm32_d32bis(args) _gen86_modrm32_d32bis args
#define _gen86_modrm32_d32bis(p_pc, _rex, _putinstr, reg, disp32s, breg, index, scale, _putimm, _immsiz) \
	_gen86_voidcast(_gen86_rex_(p_pc, _rex, reg, breg, 0) _putinstr,                                     \
	                _gen86_modrm(p_pc, 2, reg, 4),                                                       \
	                _gen86_modrm(p_pc, _gen86_modrm32_scaleval(scale), index, breg),                     \
	                _gen86_putsl(p_pc, disp32s), _putimm)

/* <instr> %reg, disp(%breg,%index)    # Autoselect optimal encoding for `disp' */
#define gen86_modrm32_dbi(args) _gen86_modrm32_dbi args
#define _gen86_modrm32_dbi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz)     \
	(_gen86_fitsb(disp)                                                                         \
	 ? ((disp) == 0                                                                             \
	    ? _gen86_modrm32_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz)          \
	    : _gen86_modrm32_d8bi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz)) \
	 : _gen86_modrm32_d32bi(p_pc, _rex, _putinstr, reg, disp, breg, index, _putimm, _immsiz))

/* <instr> %reg, disp(,%index, scale)  # Autoselect optimal encoding for `disp' */
#define gen86_modrm32_dis(args) _gen86_modrm32_dis args
#define _gen86_modrm32_dis(p_pc, _rex, _putinstr, reg, disp, index, scale, _putimm, _immsiz) \
	_gen86_modrm32_d32is(p_pc, _rex, _putinstr, reg, disp, index, scale, _putimm, _immsiz)

/* <instr> %reg, disp(%breg,%index, scale) # Autoselect optimal encoding for `disp' */
#define gen86_modrm32_dbis(args) _gen86_modrm32_dbis args
#define _gen86_modrm32_dbis(p_pc, _rex, _putinstr, reg, disp, breg, index, scale, _putimm, _immsiz)     \
	(_gen86_fitsb(disp)                                                                                 \
	 ? ((disp) == 0                                                                                     \
	    ? _gen86_modrm32_bis(p_pc, _rex, _putinstr, reg, breg, index, scale, _putimm, _immsiz)          \
	    : _gen86_modrm32_d8bis(p_pc, _rex, _putinstr, reg, disp, breg, index, scale, _putimm, _immsiz)) \
	 : _gen86_modrm32_d32bis(p_pc, _rex, _putinstr, reg, disp, breg, index, scale, _putimm, _immsiz))
#endif /* LIBGEN86_TARGET_BITS >= 32 */



/* <instr> %reg, (%breg,%index) */
#define gen86_modrm_bi(args) _gen86_modrm_bi args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz) \
	_gen86_modrm16_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_bi(p_pc, _rex, _putinstr, reg, breg, index, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */

/* <instr> %reg, disp8s(%breg,%index)   # `disp8s' must `int8_t' */
#define gen86_modrm_d8bi(args) _gen86_modrm_d8bi args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz) \
	_gen86_modrm16_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_d8bi(p_pc, _rex, _putinstr, reg, disp8s, breg, index, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */

/* <instr> %reg, disps(%breg,%index)    # `disps' must `int16_t' (in 16-bit mode) or `int32_t' */
#define gen86_modrm_dbi(args) _gen86_modrm_dbi args
#if LIBGEN86_TARGET_BITS == 16
#define _gen86_modrm_dbi(p_pc, _rex, _putinstr, reg, disps, breg, index, _putimm, _immsiz) \
	_gen86_modrm16_dbi(p_pc, _rex, _putinstr, reg, disps, breg, index, _putimm, _immsiz)
#else /* LIBGEN86_TARGET_BITS == 16 */
#define _gen86_modrm_dbi(p_pc, _rex, _putinstr, reg, disps, breg, index, _putimm, _immsiz) \
	_gen86_modrm32_dbi(p_pc, _rex, _putinstr, reg, disps, breg, index, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS != 16 */


#if LIBGEN86_TARGET_BITS >= 32
/* <instr> %reg, (%breg,%index,scale) */
#define gen86_modrm_bis(args) _gen86_modrm_bis args
#define _gen86_modrm_bis(p_pc, _rex, _putinstr, reg, breg, index, scale, _putimm, _immsiz) \
	_gen86_modrm32_bis(p_pc, _rex, _putinstr, reg, breg, index, scale, _putimm, _immsiz)

/* <instr> %reg, disp8s(%breg,%index,scale)   # `disp8s' must `int8_t' */
#define gen86_modrm_d8bis(args) _gen86_modrm_d8bis args
#define _gen86_modrm_d8bis(p_pc, _rex, _putinstr, reg, disp8s, breg, index, scale, _putimm, _immsiz) \
	_gen86_modrm32_d8bis(p_pc, _rex, _putinstr, reg, disp8s, breg, index, scale, _putimm, _immsiz)

/* <instr> %reg, disps(%breg,%index,scale) */
#define gen86_modrm_dbis(args) _gen86_modrm_dbis args
#define _gen86_modrm_dbis(p_pc, _rex, _putinstr, reg, disps, breg, index, scale, _putimm, _immsiz) \
	_gen86_modrm32_dbis(p_pc, _rex, _putinstr, reg, disps, breg, index, scale, _putimm, _immsiz)

/* <instr> %reg, disps(,%index,scale) */
#define gen86_modrm_dis(args) _gen86_modrm_dis args
#define _gen86_modrm_dis(p_pc, _rex, _putinstr, reg, disps, index, scale, _putimm, _immsiz) \
	_gen86_modrm32_dis(p_pc, _rex, _putinstr, reg, disps, index, scale, _putimm, _immsiz)

/* Index-only aliases */
#define gen86_modrm_i(args)  _gen86_modrm_i args
#define gen86_modrm_is(args) _gen86_modrm_is args
#define gen86_modrm_di(args) _gen86_modrm_di args
#define _gen86_modrm_i(p_pc, _rex, _putinstr, reg, index, _putimm, _immsiz) \
	_gen86_modrm_dis(p_pc, _rex, _putinstr, reg, 0, index, 1, _putimm, _immsiz)
#define _gen86_modrm_is(p_pc, _rex, _putinstr, reg, index, scale, _putimm, _immsiz) \
	_gen86_modrm_dis(p_pc, _rex, _putinstr, reg, 0, index, scale, _putimm, _immsiz)
#define _gen86_modrm_di(p_pc, _rex, _putinstr, reg, disps, index, _putimm, _immsiz) \
	_gen86_modrm_dis(p_pc, _rex, _putinstr, reg, disps, index, 1, _putimm, _immsiz)
#endif /* LIBGEN86_TARGET_BITS >= 32 */


#endif /* !_LIBGEN86_REGISTER_H */
