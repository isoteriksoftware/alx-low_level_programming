#include "lists.h"

/**
 * print_listint - prints a singly linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int retval = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		retval++;
	}
	return (retval);
}
