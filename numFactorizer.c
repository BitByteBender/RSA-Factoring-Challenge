#include "fact.h"
/**
 *
 */
void numFactorizer(unsigned long long Number)
{
	unsigned long long fct = 2, fctResult;

	printf("%llu=", Number);

	for (; (fct * fct) <= Number; fct++)
	{
	fctResult = Number / fct;

	if (Number % fct == 0)
	{
	printf("%llu*%llu\n", fctResult, fct);
	return;
	}
	}
	printf("1*%llu\n", Number);
}
