#include "lists.h"

/**
 * sum_dlistint - sum the list
 *
 * @head: head of the list
 * Return: sum of nodes data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
