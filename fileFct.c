#include "fact.h"
/**
 * fileFactorizer - reads nums from file and factorize
 * @file: file to be read
 * @ln: ptr to a buffer storing lines
 * @length: length of the buffer
 */
void fileFactorizer(FILE *file, char *ln, size_t length)
{
	unsigned long long Number = 0;

	while (getline(&ln, &length, file) != -1)
	{
	Number = dtSwitcher(ln, 0);
	numFactorizer(Number);
	}

	onExit(ln, file);
}
