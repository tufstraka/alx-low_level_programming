#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *
 *Return: 0
 */

int _isupper(int c)
{

	while (c <= 90)
	{
		if (c >= 65)
		{
			return (1);
		}
	}

	return (0);
}
