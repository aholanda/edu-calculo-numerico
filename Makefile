PROJ := numcalc

default: $(PROJ).pdf

$(PROJ).pdf: $(PROJ).aux
	xelatex $(PROJ)

$(PROJ).aux: $(PROJ).tex
	xelatex $(PROJ) && bibtex $(PROJ)

$(PROJ).tex: src

tidy:
	$(RM) *.aux *.bbl *.blg *.log *.out $(PROJ).pdf $(trash)

.PHONY: tidy

include src/Makefile

