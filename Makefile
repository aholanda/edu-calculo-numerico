PROJ := numcalc

default: $(PROJ).pdf

$(PROJ).pdf: $(PROJ).tex
	xelatex $< && xelatex $<

$(PROJ).tex: src

clean:
	$(RM) *.aux *.log *.out $(PROJ).pdf $(trash)

.PHONY: clean

include code.mk
