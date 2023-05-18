#include "lists.h"

/**
 * insert_node - function of the prototype
 * @tmp: ptr to nth position node in doubly linked list
 * @n: node data
 * Return: address of inserted node
 */
dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *recent;

	recent = malloc(sizeof(struct dlistint_s));
	if (!recent)
		return (NULL);
	recent->n = n;

	recent->next = tmp;
	recent->prev = tmp->prev;
	tmp->prev->next = recent;
	tmp->prev = recent;

	return (recent);
}

/**
 * insert_dnodeint_at_index - function of the prototype
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);

	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}

	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
