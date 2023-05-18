#include "lists.h"

/**
 * sum_dlistint - function of the prototype
 * @head: pointer to head of doubly linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (!head)
		return (add);

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
