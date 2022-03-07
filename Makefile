PROJ := numcalc
LATEX := xelatex

main.pdf: main.aux
	$(LATEX) main && $(LATEX) main
trash += main.log main.out main.pdf

main.aux: $(wildcard *.tex)
	$(LATEX) main && bibtex main
trash += main.aux main.bbl main.blg

main.tex: src

tidy:
	$(RM) $(PROJ).pdf $(trash)

.PHONY: tidy

$(PROJ).pdf: main.pdf
	mv main.pdf $(PROJ).pdf

# Code
include src/Makefile
