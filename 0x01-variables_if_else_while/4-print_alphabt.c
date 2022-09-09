#include <stdio.h>

/**
 * main - entry point
 * Description - Prints the alphabets in lowercase except 'q' and 'e'
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet < 'e' ){
			putchar(alphabet);
		}
		if (alphabet > 'e' && alphabet < 'q'){
			putchar(alphabet);
		}
		if (alphabet > 'q'){
			putchar(alphabet);
		}

	}

	putchar('\n');

	return (0);

}
