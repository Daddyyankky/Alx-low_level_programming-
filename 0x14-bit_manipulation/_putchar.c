#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: char to print
 *
 * Return: on success 1.
 * on, -1 to be returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
