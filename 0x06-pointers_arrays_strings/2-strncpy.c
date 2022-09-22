#include "main.h"

/**
 *_strncpy - copies a string
 *
 *@dest: destination
 *@src: source
 *@n: number of bytes to be copied
 *
 *Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int srclength;

	index = 0;
	srclength = 0;

	while (src[index++])
	{
		srclength++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = srclength; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}

