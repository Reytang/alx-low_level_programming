#include "lists.h"

/**
 * dlistint_len - function of the prototype
 * @h: pointer to head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_1 = 0;

	while (h)
	{
		h = h->next;
		node_1 += 1;
	}

	return (node_1);
}
