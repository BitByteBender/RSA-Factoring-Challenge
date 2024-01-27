#include "fact.h"
/**
 * fileOpener - opens a file
 * @fname: file name
 * Return: pointer to opened file
 */
FILE *fileOpener(const char *fname)
{
	FILE *fl = fopen(fname, "r");

	if (fl == NULL)
	{
	perror("Err! couldn't open file");
	exit(EXIT_FAILURE);
	}
	return (fl);
}
