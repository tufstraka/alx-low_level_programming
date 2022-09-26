#include "main.h"

/**
 *_memcpy - copies n bytes from @src to @dest
 *@src: source
 *@dest: destination
 *@n: number of bytes
 *Return: pointer to dest memory address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
