#include "lists.h"

/**
 * add_modeint - adds the new node in the beginning of a linked list
 * @head: point to first node in the list
 * @n: data to be inserted in the new node
 *
 * Return: point to the new node, or NULL when if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
