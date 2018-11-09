#!/bin/bash
rm -f *.aux *.log *.toc *.pdf

python build-contents.py > contents.tex

pdflatex trd.tex
pdflatex trd.tex

rm -f *.aux *.log *.toc contents.tex
