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

	a = 48;
	while (a <= 50)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 53)
			{
				d = 48;
				while (d <= 57)
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
			if (a == 50 && b == 51)
			{
				break;
			}
			b++;
		}
		a++;
	}
}
