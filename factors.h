#ifndef _FACTORS_H
#define _FACTORS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 400

long long isprime(long long);
long long isfactor(long long, long long);
long long isodd(long long);

char *freadln(FILE *, char buffer[]);
void lex(FILE *);
#endif
