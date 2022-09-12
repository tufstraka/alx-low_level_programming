#include <stdio.h>

/**
 * main - check the code
 *
 * Description - Prints the alphabet in lowercase 10 times, followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int times;

	for( times = 0; times < 10; times++)
	{

		for(alphabet = 97; alphabet <= 122; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}

}

int main(void)
{

	print_alphabet_x10();
	return (0);

}

