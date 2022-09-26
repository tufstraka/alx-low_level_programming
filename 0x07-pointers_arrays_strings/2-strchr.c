#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: contains memory address of the string
 *@c: character to be located
 *
 *Return: pointer to the character in the string
 */

char *_strchr(char *s, char c)
{
	unsigned int index;

	index = 0;

	while (index != c)
	{
		s[index++];
	}
	return (s);
}
