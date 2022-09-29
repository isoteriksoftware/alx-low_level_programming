#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at a given index
 *
 * @head: pointer to the head
 * @idx: position to delete
 * Return: pointer to new node
 */
int delete_dnodeint_at_index(
		dlistint_t **head, unsigned int idx)
{
	dlistint_t *h = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);
	while (h && i < idx)
	{
		h = h->next;
		i++;
	}
	if (i == idx && h)
	{
		if (h->prev)
			h->prev->next = h->next;
		if (h->next)
			h->next->prev = h->prev;
		if (i == 0)
			*head = h->next;
		free(h);
		return (1);
	}
	return (-1);
}
