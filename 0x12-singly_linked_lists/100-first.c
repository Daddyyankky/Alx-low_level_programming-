#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - print a sentence befour the main
 * function is executed
 */
void first(void)
{
	printf("you're best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
