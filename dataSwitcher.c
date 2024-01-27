#include "fact.h"
/**
 *
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
