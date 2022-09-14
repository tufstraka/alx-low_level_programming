#include "main.h"

/**
 * _abs - prints the absolute value of the argument
 *
 * @n: parameter
 *
 * Return: 0;
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
