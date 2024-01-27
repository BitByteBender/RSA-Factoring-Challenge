#ifndef FACT_H
#define FACT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

FILE *fileOpener(const char *);
unsigned long dtSwitcher(const char *, unsigned long);
void fileFactorizer(FILE *, char *, size_t);
void numFactorizer(unsigned long);
void onExit(char *, FILE *);
#endif /*FACT_H*/
