#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: first string
 * @accept: string to match.
 * Return: Pointer to the byte in `s` that matches`accept`.
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
