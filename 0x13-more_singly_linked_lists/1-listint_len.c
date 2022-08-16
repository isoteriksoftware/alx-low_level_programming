#include "lists.h"

/**
 * listint_len - length of a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int retval = 0;

	while (h)
	{
		h = h->next;
		retval++;
	}
	return (retval);
}
