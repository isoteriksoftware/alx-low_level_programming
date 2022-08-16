#include "lists.h"

/**
 * delete_nodeint_at_index - adds a node to a singly linked list
 * @h: pointer to head of the list
 * @idx: position to delete
 * Return: pointer to new elemnt
 */
int delete_nodeint_at_index(listint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *tmp = *h, *head = *h;

	if (!head || !h)
		return (-1);
	if (idx == 0)
	{
		*h = head->next;
		free(head);
		return (1);
	}
	while (head && i < idx)
	{
		tmp = head;
		head = head->next;
		i++;
	}
	if (i < idx)
		return (-1);
	tmp->next = head->next;
	free(head);
	return (1);
}
