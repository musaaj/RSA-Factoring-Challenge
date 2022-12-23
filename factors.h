#ifndef _FACTORS_H
#define _FACTORS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 400

long long isprime(long long);
u_int64_t isfactor(u_int64_t, u_int64_t);
long long isodd(long long);
u_int64_t _atol(char *s);

char *freadln(FILE *, char buffer[]);
void lex(FILE *);
#endif
