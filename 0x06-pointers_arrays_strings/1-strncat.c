#include "main.h"

/**
 *_strncat - concatenates two strings
 *but uses at most n bytes
 *
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int destlength;

	index = 0;
	destlength = 0;

	while (dest[index++])
	{
		destlength++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[destlength++] = src[index];
	}

	return (dest);
}
