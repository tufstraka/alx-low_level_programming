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
	while (n <= 97)
	{
		if (n == 97)
		{
			putchar(',');
			putchar(' ');
			n++;
			printf("%i", n);
			putchar('\n');
			break;
		}
		printf("%i", n);
		putchar(',');
		putchar(' ');
		n++;
	}

	while (n >= 98)
	{
		printf("%i", n);
		if (n == 98)
		{
			printf("%i", n);
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		n--;
	}
}
