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
			printf("%i", 1);
			break;
		}
	}

	while (c <= 122)
	{
		if (c >= 97)
		{
			printf("%i", 0);
			break;
		}
	}

	return (0);
}
