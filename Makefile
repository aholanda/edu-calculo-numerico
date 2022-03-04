PROJ := numcalc
LATEX := xelatex

default: $(PROJ).pdf

$(PROJ).pdf: $(PROJ).aux $(PLOTS)
	$(LATEX) $(PROJ)

$(PROJ).aux: $(PROJ).tex $(PLOTS)
	$(LATEX) $(PROJ) && bibtex $(PROJ) && $(LATEX) $(PROJ)

$(PROJ).tex: src

tidy:
	$(RM) *.aux *.bbl *.blg *.log *.out $(PROJ).pdf $(trash)

.PHONY: tidy

# Code
include src/Makefile
