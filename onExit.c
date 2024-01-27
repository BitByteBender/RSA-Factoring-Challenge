#include "fact.h"
/**
 * onExit - cleanup function
 * @ln: ptr to line buffer
 * @fl: file ptr to the opened file
 */
void onExit(char *ln, FILE *fl)
{
	free(ln);
	fclose(fl);
}
