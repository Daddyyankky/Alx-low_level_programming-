#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all elements of the linked list
 * @h: the linked list of all type listint_t to be printed
 *
 * Return: all number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
