#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - function of the prototype
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return:  NULL or number of unique nodes in the list.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rat, *hen;

	if (head == NULL || head->next == NULL)
		return (NULL);

	rat = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (rat == hen)
		{
			rat = head;
			while (rat != hen)
			{
				rat = rat->next;
				hen = hen->next;
			}
			return (rat);
		}
		rat = rat->next;
		hen = (hen->next)->next;
	}
	return (NULL);
}
