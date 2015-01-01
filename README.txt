Scan-Parse-and-Evaluate
=======================

Scanner, parser and evaluator of mathematical expressions written in C. Completed in 2014. 

CSC 173
Week 3-4 Project
Written in a group by:
Aleksandra Shanina
Ilya Dyskin

This scanner, parser and evaluator can be used on mathematical expressions. To use: change “input.txt” and run the program. 

DISCLAIMER:
1) Parser only accepts increments of decrements when they appear after a variable.
2) We added powers evaluator for the extra credit, but due to the nature of double pow(double a, double b)
function, sometimes, this function returns incorrect variables.
3)Program outputs the result in output.txt file with a following format:
= result1
= result2
etc

RUN INSTRUCTIONS:
make
./runtest "name of file"
