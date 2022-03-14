PROJ := numcalc
LATEX := xelatex

main.pdf: main.tex $(wildcard *.tex) numcalc
	$(LATEX) main && $(LATEX) main
trash += main.aux main.log main.nav main.out \
	 main.pdf main.snm main.toc main.vrb

main.tex: 

clean:
	$(RM) $(PROJ).pdf $(trash)

.PHONY: tidy

$(PROJ).pdf: main.pdf
	mv main.pdf $(PROJ).pdf

