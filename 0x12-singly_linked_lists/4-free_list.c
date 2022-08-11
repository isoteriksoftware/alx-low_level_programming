#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
