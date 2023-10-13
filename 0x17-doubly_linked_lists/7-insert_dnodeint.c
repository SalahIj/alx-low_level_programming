#include "lists.h"

/**
 * insert_dnodeint_at_index - The function name.
 * @h: The first input
 * @idx: The second input.
 * @n: the third input.
 * Return: The result.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node, *next_node;
	unsigned int pos;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *h;
	for (pos = 0; pos != idx - 1; pos++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	next_node = tmp->next;
	tmp->next = new_node;
	next_node->prev = new_node;
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = next_node;
	return (new_node);
}
