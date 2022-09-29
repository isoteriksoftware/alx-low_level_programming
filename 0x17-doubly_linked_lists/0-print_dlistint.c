#include "lists.h"

/**
 * print_dlistint - prints a list
 *
 * @head: list head
 * Return: length of list
 */

size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
