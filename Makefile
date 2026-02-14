# Creator: Kurt M. Weber
# Created on: 2025-02-14

# This file is part of baryon, a component of the Cosmoverse.
# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

export BARYON_INCLUDE = ./include
export QUANTA_INCLUDE = .
export FILAMENT_INCLUDE = .

.PHONY: test

all: 
	cd src && make all
	cd filament && make all
	cd induction && make all
	ln -sf src/induction.a induction.a
	ln -sf src/induction.so induction.so

test: all
	cd test && make all

clean:
	cd src && make clean
	cd filament && make clean
	cd induction && make clean
	cd test && make clean
	rm -f *.o *.a *.so