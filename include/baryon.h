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

typedef qword_t baryon_hash_t;

typedef qword_t baryon_id_t[4];

typedef struct baryon {
  uint64_t version;
  baryon_id_t id;
  baryon_generic_ref b;
} baryon;

#define BARYON_GENERIC_FIELDS                                                  \
  uint64_t version;                                                            \
  baryon_id_t id;                                                              \
  size_t length;                                                               \
  size_t ods_length;                                                           \
  const char *ods;

typedef struct baryon_generic_common {
  BARYON_GENERIC_FIELDS
} baryon_generic_common;

#endif