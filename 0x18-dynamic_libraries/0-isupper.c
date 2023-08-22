#include <stdio.h>
#include "main.h"

/**
 * _isupper - an check main
 * @c:  integer input n
 * Description: the function that checks for uppercase character
 * Return: 1 or 0.
 */

int _isupper(int c)
{
	char ch;
	int n = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (ch == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
