#include "fact.h"
/**
 *
 */
void numFactorizer(unsigned long Number)
{
	unsigned long fct = 2, fctResult;

	printf("%lu=", Number);

	for (; (fct * fct) <= Number; fct++)
	{
	fctResult = Number / fct;

	if (Number % fct == 0)
	{
	printf("%lu*%lu\n", fctResult, fct);
	return;
	}
	}
	printf("1*%lu\n", Number);
}
