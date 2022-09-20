#include "main.h"
#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers 
 * followed by a new line.
 * @a: argument is the memory address of int
 * @n: elements to be printed
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
			       printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
