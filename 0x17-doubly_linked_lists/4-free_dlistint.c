#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
