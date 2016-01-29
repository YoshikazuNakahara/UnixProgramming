#
#Makefile for Chapter 09
#
## Type  make    to compile all the programs
#in the chapter 
#
all: changeenv showenv smsh1 smsh2 smsh3 smsh4

clean:
	rm -f changeenv showenv smsh1 smsh2 smsh3 smsh4

changeenv: changeenv.c
	cc -g -o changeenv changeenv.c

showenv: showenv.c
	cc -g -o showenv showenv.c

smsh1: smsh1.c splitline.c execute.c
	cc -g -o smsh1 smsh1.c splitline.c execute.c

smsh2: smsh2.c splitline.c execute.c process.c controlflow.c 
	cc -g -o smsh2 smsh2.c splitline.c execute.c process.c controlflow.c 

smsh3: smsh2.c splitline.c execute.c process2.c controlflow.c \
	builtin.c varlib.c 
	cc -g -o smsh3 smsh2.c splitline.c execute.c process2.c controlflow.c \
builtin.c varlib.c 

smsh4: smsh4.c splitline.c execute2.c process2.c controlflow.c \
builtin.c varlib.c 
	cc -g -o smsh4 smsh4.c splitline.c execute2.c process2.c controlflow.c \
builtin.c varlib.c 
