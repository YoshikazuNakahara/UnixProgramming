#
## Makefile for Chapter 13
#
## Type  make    to compile all the programs
#in the chapter 
#
all: dgrecv dgrecv2 dgsend lclnt1 lclnt2 logfilec logfiled lserv1 lserv2
#
clean:
	rm -f dgrecv dgrecv2 dgsend lclnt1 lclnt2 logfilec logfiled lserv1 lserv2
#
#
dgrecv2: dgrecv2.c dgram.c
	cc -g -o dgrecv2 dgrecv2.c dgram.c
#
dgrecv: dgrecv.c dgram.c
	cc -g -o dgrecv dgrecv.c dgram.c
#
dgsend: dgsend.c dgram.c
	cc -g -o dgsend dgsend.c dgram.c
#
lclnt1: lclnt1.c lclnt_funcs1.c dgram.c
	cc -g -o lclnt1 lclnt1.c lclnt_funcs1.c dgram.c
#
lclnt2: lclnt2.c lclnt_funcs2.c dgram.c
	cc -g -o lclnt2 lclnt2.c lclnt_funcs2.c dgram.c
#
logfilec: logfilec.c
	cc -g -o logfilec logfilec.c
#
logfiled: logfiled.c
	cc -g -o logfiled logfiled.c
#
lserv1: lserv1.c lserv_funcs1.c dgram.c
	cc -g -o lserv1 lserv1.c lserv_funcs1.c dgram.c
#
lserv2: lserv2.c lserv_funcs2.c dgram.c
	cc -g -o lserv2 lserv2.c lserv_funcs2.c dgram.c
#
