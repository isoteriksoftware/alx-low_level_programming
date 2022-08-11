#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			nodes++;
			continue;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
