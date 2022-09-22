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

	for (index = 0; dest[index]; index++)
	{
		destlength++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[index++] = src[index];
	}

	return (dest);
}

