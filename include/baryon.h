/*
 * Creator: Kurt M. Weber
 * Created on: 2024-12-26
 *
 * This file is part of baryon, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing informatin.
 */

#ifndef _BARYON_H
#define _BARYON_H

#include <quanta/include/types.h>

typedef struct baryon;

typedef baryon *baryon_ref;

typedef void *baryon_generic_ref;

typedef struct baryon {
  uint64_t version;
  qword_t id[4];
  baryon_generic_ref b;
} baryon;

#define BARYON_GENERIC_FIELDS                                                  \
  uint64_t version;                                                            \
  qword_t id[4];                                                               \
  uint64_t length;                                                             \
  uint64_t ods_length;                                                         \
  const char *ods;

typedef struct baryon_generic_common {
  BARYON_GENERIC_FIELDS
} baryon_generic_common;

#endif