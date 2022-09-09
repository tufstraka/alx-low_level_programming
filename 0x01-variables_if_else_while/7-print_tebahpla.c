#include <stdio.h>

/**
 * main - entry point
 * Description - Prints the numbers 0 to 9 followed by a new line
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
