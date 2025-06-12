/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_SET_MEMORY_H
#define __ASM_SET_MEMORY_H
/*
 * Functions to change memory attributes.
 */
int set_memory_rox(unsigned long addr, int numpages);
int set_memory_rwx(unsigned long addr, int numpages);
int set_memory_xx(unsigned long addr, int numpages);
int set_memory_nxx(unsigned long addr, int numpages);
#endif