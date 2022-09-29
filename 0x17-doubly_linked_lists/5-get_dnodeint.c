#include "lists.h"

/**
 * get_dnodeint_at_index - retrieve node
 *
 * @head: head of the list
 * @index: position of the node to get
 * Return: Node at index or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
