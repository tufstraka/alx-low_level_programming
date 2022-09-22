#include "main.h"

/**
 *_strcat - function that concatenates two strings
 *
 *@dest: pointer variable to a char data type
 *@src: pointer variable to a char data type
 *
 *Return: pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int destlength;

	index = 0;
	destlength = 0;

	while (dest[index++])
	{
		destlength++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[destlength++] = src[index];
	}

	return (dest);
}

