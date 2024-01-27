#include "fact.h"
/**
 * dtSwitcher - converts string to unsigned long long int
 * @s: input to be converted
 * @r: val of result
 * Return: converted data type (ull)
 */
unsigned long long dtSwitcher(const char *s, unsigned long long r)
{
	while (*s >= '0' && *s <= '9')
	{
	r = r * 10 + (*s - '0');
	s++;
	}
	return (r);
}
