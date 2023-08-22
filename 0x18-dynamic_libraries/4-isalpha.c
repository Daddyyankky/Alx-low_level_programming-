#include "main.h"

/**
 * _isalpha - checks for alphabetic characte
 * @c: the character
 * Return: 1 if is character, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
