/*
 * Creator: Kurt M. Weber
 * Created on: 2025-01-05
 *
 * This file is part of baryon, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing informatin.
 */

#include <baryon.h>

baryon_hash_t baryon_hash(baryon_id_t id) {
  return (id[0] ^ id[1]) ^ (id[2] ^ id[3]);
}