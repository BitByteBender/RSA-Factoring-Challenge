#include "fact.h"
/**
 *
 */
void fileFactorizer(FILE *file, char *ln, size_t length)
{
	unsigned long long Number = 0;

	while (getline(&ln, &length, file) != - 1)
	{
	Number = dtSwitcher(ln, 0);
	numFactorizer(Number);
	}

	onExit(ln, file);
}
