#include "main.h"

/**
 *_strncopy - copies a string
 *
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *
 *Return: pointer to the copied string
 */

char *_strncopy(char *dest, char *src, int n)
{
	int index;
	int destlength;
	
	index = 0;
	destlength = 0

	for (index = 0; src[index++]; index++)
	{
		dest[destlength++] = src[index];
	}

	return (dest);
}

