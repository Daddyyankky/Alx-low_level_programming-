#include <stdio.h>
#include <unistd.h>
/**
 * main - A c program that prints a line to the standard error
 * Retrun: 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 20 15-10-19\n", 59);
	return (1);
}
