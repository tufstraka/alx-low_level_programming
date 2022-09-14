#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Description: Prints the alphabet in lowercase 10 times
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int alphabet;
	int times;

	for (times = 0; times < 10; times++)
	{

		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}

}
