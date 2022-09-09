#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Find last digit */
	int lastDigit; 
	lastDigit = n % 10;

	/* Total number of digits - 1 */
	int digits = (int)log10(n);

	/* Find first digit */
	int firstDigit = n / pow(10, digits - 1);

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, firstDigit);
	}
	if (n < 6 && !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}

	return (0);

}
