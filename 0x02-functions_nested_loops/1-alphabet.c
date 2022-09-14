#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
