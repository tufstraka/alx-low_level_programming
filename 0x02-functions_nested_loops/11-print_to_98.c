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
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 98)
		{
			for (i = n; i <= 98; i--)
			{
				printf("%i", i);
				if (i == 98)
				{
					putchar('\n');
					breal;
				}
				putchar(',');
				putchar(' ');
			}
		}
		printf("%i", i);
		if (i == 98)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}
}
