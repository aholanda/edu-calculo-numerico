PROJ := numcalc
LATEX := xelatex

$(PROJ).pdf: main.pdf
	mv main.pdf $(PROJ).pdf

main.pdf: main.aux
	$(LATEX) main
trash += main.log main.out main.pdf

main.aux: main.tex
	$(LATEX) $< && bibtex main && $(LATEX) $<
trash += main.aux main.bbl main.blg

main.tex: src

tidy:
	$(RM) $(PROJ).pdf $(trash)

.PHONY: tidy

# Code
include src/Makefile
