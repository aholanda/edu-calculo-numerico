default: main.pdf

main.pdf: main.tex 02-zeros.tex macros.tex
	xelatex $< && xelatex $<

clean:
	$(RM) main.aux main.log main.out main.pdf

.PHONY: clean
