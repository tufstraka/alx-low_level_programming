#include "main.h"

/**
 * print_square -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
