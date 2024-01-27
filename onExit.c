#include "fact.h"
/**
 *
 */
void onExit(char *ln, FILE *fl)
{
	free(ln);
	fclose(fl);
}
