#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
