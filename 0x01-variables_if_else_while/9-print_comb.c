#include <stdio.h>

/**
 * main - entry point
 *
 * Description - Prints all single digits numbers
 * of base 10, formatted with a comma and space after
 * each digit
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
