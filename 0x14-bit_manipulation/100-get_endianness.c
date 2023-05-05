#include "main.h"

/**
 * get_endianness - to check if the machine is little or big endian
 * Return: 0 is big, 1 is little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
