#ifndef FACT_H
#define FACT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

FILE *fileOpener(const char *);
unsigned long long dtSwitcher(const char *, unsigned long long);
void fileFactorizer(FILE *, char *, size_t);
void numFactorizer(unsigned long long);
void onExit(char *, FILE *);
#endif /*FACT_H*/
