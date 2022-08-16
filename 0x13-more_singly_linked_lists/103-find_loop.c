#include "lists.h"

/**
 * find_listint_loop - finds the index at which a loop starts
 * @head: list head
 *
 * Description: mdldndkdbfkml
 * Return: pointer to loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (!head || !(head->next))
		return (NULL);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	/* Loop not found */
	if (slow != fast)
		return (NULL);
	/* loop found - find start */
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

