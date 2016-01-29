#
# Makefile for Chapter 02
#
# Type  make    to compile all the programs
# in the chapter 
#
#
all: cp1

clean:
	rm -f who1 who2 who3

who1: who1.c 
	cc -g -o who1 who1.c 

who2: who2.c 
	cc -g -o who2 who2.c 

who3: who3.c utmplib.c
	cc -g -o who3 who3.c utmplib.c
