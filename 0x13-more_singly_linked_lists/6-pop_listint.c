#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: points to first element in linked list
 *
 * Return: data in the element that was deleted,
 * or 0 when list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
