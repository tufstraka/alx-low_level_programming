#include "main.h"
/**
 *positive_or_negative - prints whether number is
 *positive, negative or zero
 *
 *@i: parameter in consideration
 *
 *Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive", i);
	}
	if (i == 0)
	{
		printf("%i is zero", i);
	}
	printf("%i is negative", i);
}
