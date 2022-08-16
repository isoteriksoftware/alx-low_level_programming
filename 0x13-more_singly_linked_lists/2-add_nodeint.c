#include "lists.h"

/**
 * add_nodeint - adds a node to a singly linked list
 * @head: pointer to head of the list
 * @n: data to store
 * Return: pointer to new elemnt
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	return (new);
}
