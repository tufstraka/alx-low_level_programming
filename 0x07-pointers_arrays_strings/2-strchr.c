#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: contains memory address of the string
 *@c: character to be located
 *
 *Return: if c is found - pointer to the first occurrence
 *        if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}

	return ('\0');
}
