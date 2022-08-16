#include "lists.h"

/**
 * get_nodeint_at_index - gets a node from a singly linked list
 * @head: pointer to head of the list
 * @index: data to store
 * Return: pointer to new elemnt
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
