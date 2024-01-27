#include "fact.h"
/**
 *
 */
int main(int argc, char **argv)
{
	const char *fileName = NULL;

	if (argc != 2)
	{
	printf("Err: %s <file>\n", argv[0]);
	return (EXIT_FAILURE);
	}

	fileName = argv[1];
	fileFactorizer(fileOpener(fileName), NULL, 0);

	return (0);
}
