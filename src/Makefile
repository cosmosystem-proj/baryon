# Creator: Kurt M. Weber
# Created on: 2022-02-14

# This file is part of baryon, a component of the Cosmoverse.
# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

CC = gcc
PROJECT = baryon
SOURCES_C = $(shell find . -type f -iname '*.c'  ! -name cosmos.c | sort)
DEPFILES = $(SOURCES_C:.c=.d)
OBJECTS_C = $(SOURCES_C:.c=.o)

all: libs

libs: shared-libs static-libs

shared-libs: $(PROJECT).so

$(PROJECT).so: $(OBJECTS_C)
	gcc $^ -shared -o $@

static-libs: $(PROJECT).a

$(PROJECT).a: $(OBJECTS_C)
	ar -rcs $@ $^

%.o: %.c
	$(CC) -MMD -MP -g -c $< -fPIC -o $@ -I../$(BARYON_INCLUDE) -I../$(FILAMENT_INCLUDE) -I../$(QUANTA_INCLUDE) -D ENV_HOSTED

clean:
	rm -f $(OBJECTS_C) $(DEPFILES) $(PROJECT).a $(PROJECT).so

-include $(DEPFILES)