#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function of the prototype
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
