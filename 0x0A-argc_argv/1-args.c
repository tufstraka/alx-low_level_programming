#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 (Always successful)
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
	int count;

	for (count = 0; count <= argc; count++)
	{
		prinf("%d\n", count);
	}

	return (0);
}
