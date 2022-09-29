#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at a given index
 *
 * @head: pointer to the head
 * @n: data to add
 * @idx: position to insert
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *h;
	unsigned int i = 0;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!(*head) && idx == 0)
	{
		*head = new;
		return (new);
	}
	h = *head;
	while (h->next && i < idx)
	{
		h = h->next;
		i++;
	}
	if (i == idx)
	{
		new->next = h;
		if (h->prev)
			h->prev->next = new;
		else
			*head = new;
		new->prev = h->prev;
		h->prev = new;
	} else if (idx == i + 1)
	{
		h->next = new;
		new->prev = h;
	} else
	{
		free(new);
		return (0);
	}
	return (new);
}
