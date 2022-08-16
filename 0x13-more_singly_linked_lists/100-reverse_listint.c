#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @h: head of the list
 *
 * Return: pointer to the reversed
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *tmp2, *tmp1;

	if (!h || !(*h))
		return (NULL);
	tmp1 = (*h)->next;
	(*h)->next = NULL;
	while (tmp1)
	{
		tmp2 = *h;
		*h = tmp1;
		tmp1 = (*h)->next;
		(*h)->next = tmp2;
	}
	return (*h);
}
