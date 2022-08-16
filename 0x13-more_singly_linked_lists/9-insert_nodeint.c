#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node to a singly linked list
 * @h: pointer to head of the list
 * @n: data to store
 * @idx: position to insert
 * Return: pointer to new elemnt
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp = *h, *head = *h;

	if (!h)
		return (NULL);
	while (head && i < idx)
	{
		tmp = head;
		head = head->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = head;
		if (tmp == head)
			*h = new;
		else
			tmp->next = new;
	}

	return (new);
}
