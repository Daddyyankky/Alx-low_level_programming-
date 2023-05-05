#include "main.h"

/**
 * get_bit - return value of a bit at an index in decimal num
 * @n: num to be searched
 * @index: index of bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
