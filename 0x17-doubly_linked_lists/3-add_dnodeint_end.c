#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 *
 * @head: pointer to the head
 * @n: data to add
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	h = *head;
	while (h->next)
		h = h->next;
	new->prev = h;
	h->next = new;
	return (new);
}
