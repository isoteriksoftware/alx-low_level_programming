#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a list
 * @head: head of the list
 * @n: data to add
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
