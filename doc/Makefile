# Makefile to build libopencm3 documentation

# 14 September 2012
# (C) Ken Sarkies <ksarkies@internode.on.net>

ARCHS := stm32f0 stm32f1 stm32f2 stm32f3 stm32f4 stm32f7
ARCHS += stm32l0 stm32l1 stm32l4
ARCHS += efm32g efm32gg efm32hg efm32lg efm32tg
ARCHS += lm3s lm4f msp432e4
ARCHS += lpc13xx lpc17xx lpc43xx
ARCHS += sam3a sam3n sam3s sam3u sam3x
ARCHS += vf6xx
ARCHS += nrf52

doc: html

html: rebuildsources $(ARCHS)
	doxygen

$(ARCHS):
	cd $@/; doxygen

clean:
	@rm -rf html/ */html/ */*.tag */doxy.sourcelist */doxygen_*.log

rebuildsources:
	@printf "Manually regenerating source lists from build deps\n"
	../scripts/gendoxylist ../lib/nrf5/2 nrf52

.PHONY: doc html $(ARCHS) rebuildsources

