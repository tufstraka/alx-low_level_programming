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
	
	//Find the length of the src string
	while (src[index++])
	{
		srclength++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		/*Set the value at each index of src to its corresponding
		 *index at dest until you reach the number of bytes specified
		 *by n
		 */
		dest[index] = src[index];
	}
	for (index = srclength; index < n; index++)
	{
		//for all indices beyond the length of src
		//add null bytes
		dest[index] = '\0';
	}

	return (dest);
}

