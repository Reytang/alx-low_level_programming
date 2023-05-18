#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function of the prototype
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *recent;

	if (head == NULL)
		return (NULL);

	recent = malloc(sizeof(struct dlistint_s));
	if (!recent)
		return (NULL);
	recent->n = n;

	if (*head == NULL)
	{
		*head = recent;
		recent->next = NULL;
		recent->prev = NULL;
		return (recent);
	}

	recent->next = *head;
	recent->prev = NULL;
	(*head)->prev = recent;
	*head = recent;
	return (recent);
}
