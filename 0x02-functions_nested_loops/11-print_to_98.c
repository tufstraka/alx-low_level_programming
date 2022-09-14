#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: parameter
 *
 * Return: 0
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		if (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	printf("%i\n", 98);
}
