#include "lists.h"

/**
 * sum_listint - prints a singly linked list
 * @h: head of the list
 * Return: sum of list data
 */
int sum_listint(listint_t *h)
{
	int retval = 0;

	while (h)
	{
		retval += h->n;
		h = h->next;
	}
	return (retval);
}
