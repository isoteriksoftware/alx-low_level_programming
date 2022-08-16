#include "lists.h"

/**
 * pop_listint - removes the head of a list
 * @head: pointer to head
 *
 * Return: data of the head 0 otherwise
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int retval;

	if (!head || !(*head))
		return (0);
	tmp = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = tmp;
	return (retval);
}
