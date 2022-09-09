#include <stdio.h>

/**
 * main - entry point
 * Description - Prints the letters z to a followed by a new line
 * Return: 0
 */

int main(void)
{

	char x;

	for (x = 'z'; x >= 'a'; x--)
	{

		putchar(x);

	}

	putchar('\n');

	return (0);

}
