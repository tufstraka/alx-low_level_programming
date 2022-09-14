#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int A;
	int B;
	int C;

	for (A = 0; A < 10; A++)
	{
		for (B = 0; B < 10; B++)
		{
			C = A * B;
			if (C / 10 != 0)
			{
				if (B != 0)
				{
					_putchar (',');
					_putchar (' ');
				}
				_putchar (C / 10 + '0');
				_putchar (C % 10 + '0');
			}
			else
			{
				if (B != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar (C  + '0');
			}
		}
	_putchar('\n');
	}
}
