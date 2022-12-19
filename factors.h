#ifndef _FACTORS_H
#define _FACTORS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_SIZE 400

int isprime(long);
long isfactor(long, long);
int isodd(long);

char *freadln(FILE *, char buffer[]);
void lex(FILE *);
#endif
