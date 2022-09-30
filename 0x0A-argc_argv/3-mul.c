#include <stdio.h>

/**
 *main - multiplies two numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Product of 2 arguments
 *		  if arguments < 2, print error, return 1
 */


int main (int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	return ("%d\n", argv[1] * argv[2]);
}
