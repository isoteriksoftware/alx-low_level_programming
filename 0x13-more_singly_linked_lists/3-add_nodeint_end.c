#include "lists.h"

/**
 * add_nodeint_end - adds a node to a singly linked list
 * @head: pointer to head of the list
 * @n: data to store
 * Return: pointer to new elemnt
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = NULL;
		if (!(*head))
		{
			*head = new;
			return (new);
		}
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}

	return (new);
}
