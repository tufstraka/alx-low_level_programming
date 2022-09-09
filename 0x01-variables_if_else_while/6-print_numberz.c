#include <stdio.h>

/**
 * main - entry point
 * Description - Prints the numbers 0 to 9 followed by a new line, using putchar
 * Return: 0
 */

int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x +'0');

	}

	putchar('\n');

	return (0);

}
