#include "main.h"


/**
 *_isdigit - checks for a digit (o through 9)
 *
 *@c: digit to be checked
 *
 *Return: 0;
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
