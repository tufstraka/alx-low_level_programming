#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Product of 2 arguments
 *		  if arguments < 2, print error, return 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
