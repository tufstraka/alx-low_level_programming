#include <stdio.h>

/**
  * main - check the code
  *
  * Description - Checks for lowercase characters
  *
  * Return: 0
  */

int _islower(int c)
{
	if ( 97 >= c <= 122 )
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
