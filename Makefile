PROJ := numcalc

default: $(PROJ).pdf

$(PROJ).pdf: $(PROJ).aux
	xelatex $(PROJ)

$(PROJ).aux: $(PROJ).tex
	xelatex $(PROJ) && bibtex $(PROJ)

$(PROJ).tex: src

clean:
	$(RM) *.aux *.bbl *.blg *.log *.out $(PROJ).pdf $(trash)

.PHONY: clean

include code.mk
