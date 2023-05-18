#include "lists.h"

/**
 * print_dlistint - function of prototype
 * @h: pointer to head of list
 * Return: number of the element
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_1 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_1 += 1;
	}

	return (node_1);
}
