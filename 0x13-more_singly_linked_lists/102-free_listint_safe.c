#include "lists.h"

int is_visited2(listint_t *node, listint_t **visited, int count);

/**
 * free_listint_safe - prints a list even with loop
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *tmp, *visited[1024];
	int count = 0;

	if (!head)
		return (-1);
	while (*head)
	{
		if (is_visited2(*head, visited, count))
		{
			*head = NULL;
			break;
		}
		visited[count++] = *head;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (count);
}

/**
 * is_visited2 - check if a node is visited
 * @node: pointer to node
 * @visited: list of visited
 * @count: length of visited
 *
 * Return: 1 if is visited and 0 otherwise
 */
int is_visited2(listint_t *node, listint_t **visited, int count)
{
	int i = 0;

	while (i < count)
	{
		if (node == visited[i])
			return (1);
		i++;
	}
	return (0);
}
