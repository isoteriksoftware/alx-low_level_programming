#include "lists.h"

/**
 * dlistint_len - get the length of a list
 *
 * @head: list head
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
