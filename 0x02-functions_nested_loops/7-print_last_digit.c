#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: parameter
 *
 * Return: 0;
 */

int print_last_digit(int r)
{
	int num;

	num = r % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
