#
# Makefile for Chapter 10
#
# Type  make    to compile all the programs
#in the chapter 

all: listargs pipe pipedemo pipedemo2 stdinredir1 stdinredir2 whotofile

clean:
	rm -f listargs pipe pipedemo pipedemo2 stdinredir1 stdinredir2 whotofile

listargs: listargs.c
	cc -g -g -o listargs listargs.c
#
pipe: pipe.c
	cc -g -g -o pipe pipe.c
#
pipedemo2: pipedemo2.c
	cc -g -g -o pipedemo2 pipedemo2.c
#
pipedemo: pipedemo.c
	cc -g -g -o pipedemo pipedemo.c
#
stdinredir1: stdinredir1.c
	cc -g -g -o stdinredir1 stdinredir1.c
#
stdinredir2: stdinredir2.c
	cc -g -g -o stdinredir2 stdinredir2.c

whotofile: whotofile.c
	cc -g -g -o whotofile whotofile.c
