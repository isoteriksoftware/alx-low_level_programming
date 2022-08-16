#include "lists.h"

/**
 * print_listint_safe - prints a list even with loop
 * @head: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *visited[1024];

	while (head)
	{
		if (is_visited(head, visited, count))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		visited[count++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (count);
}

/**
 * is_visited - check if a node is visited
 * @node: pointer to node
 * @visited: list of visited
 * @count: length of visited
 *
 * Return: 1 if is visited and 0 otherwise
 */
int is_visited(const listint_t *node, const listint_t **visited, int count)
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
