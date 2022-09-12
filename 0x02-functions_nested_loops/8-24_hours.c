#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer 
 * starting from 00:00 to 23:59
 *
 * Return: 0
 */

int jack_bauer(void) {
    int a;
    int b;
    int c;
    int d;
    for (a = 0; a <= 2; a++)
    {
        for (b = 0; b <= 3; b++)
        {
            for (c = 0; c <= 5; c++)
            {
                for (d = 0; d <= 9; d++)
                {
                    printf("%i", a);
                    printf("%i", b);
                    putchar(':');
                    printf("%i", c);
                    printf("%i", d);
                    putchar('\n');
                }
            }

        }
    }
    return 0;
}
