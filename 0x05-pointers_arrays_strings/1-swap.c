#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *
 *@a: pointer to an integer
 *@b: pointer to an integer
 *
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
