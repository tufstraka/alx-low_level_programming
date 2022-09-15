#include "main.h"

/**
 *print_most_numbers - prints the numbers from 0 to 9
 *except 2 and 4
 *
 *Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		while (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
