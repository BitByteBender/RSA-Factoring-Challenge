#include "fact.h"
/**
 * main - Entry point of the program
 * @argc: number of cmd-line args
 * @argv: cmd-line arg value
 * Return: Always 0 (SUCCESS) or EXIT_FAILURE if fails
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
