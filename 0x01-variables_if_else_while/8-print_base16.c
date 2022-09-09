#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints all the hexadecimal numbers in lowercase
 * Return: 0
 */

int main(void)
{
	char x;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
