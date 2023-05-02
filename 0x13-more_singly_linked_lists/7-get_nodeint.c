#include "lists.h"

/**
 * get_nodeimt_at_index - return node at a certain index in linked list
 * @head: first node in linked list
 * @index: index of node to be return
 *
 * Return: points to node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *temp = head;

	while (temp && c < index)
	{
		temp = temp->next;
		c++;
	}

	return (temp ? temp : NULL);
}
