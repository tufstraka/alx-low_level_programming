#include <stdio.h>

/**
 * main - entry point
 * Description - prints numbers 0 to 9 followed by a new line
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}

	putchar('\n');

	return (0);
}
