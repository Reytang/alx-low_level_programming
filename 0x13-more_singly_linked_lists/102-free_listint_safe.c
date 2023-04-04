#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - function of the prototype
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *rat, *hen;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	rat = head->next;
	hen = (head->next)->next;

	while (hen)
	{
		if (rat == hen)
		{
			rat = head;
			while (rat != hen)
			{
				nodes++;
				rat = rat->next;
				hen = hen->next;
			}

			rat = rat->next;
			while (rat != hen)
			{
				nodes++;
				rat = rat->next;
			}

			return (nodes);
		}

		rat = rat->next;
		hen = (hen->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - function of the prototype
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
