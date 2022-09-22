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
	int srclength;
	
	index = 0;
	srclength = 0;
	
	//Find the length of the src string
	while (src[index++])
	{
		srclength++;
	}

	for (index = 0; index < n; index++)
	{
		/*Set the value at each index of src to its corresponding
		 *index at dest until you reach the number of bytes specified
		 *by n
		 */
		dest[index] = src[index];
		
		//if index is the same as the length of src
		if (index = srclength)
		{
			//set the value of dest at that index to the null byte
			dest[index] = '\0';
		}
	}

	return (dest);
}

