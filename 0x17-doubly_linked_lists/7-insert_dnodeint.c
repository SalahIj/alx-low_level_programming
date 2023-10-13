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
	dlistint_t *temoi, *new_node;
	unsigned int pos;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL && idx != 0)
		return (NULL);
	temoi = *h;
	for (pos = idx; pos != 1; pos--)
	{
		temoi = temoi->next;
		if (!temoi)
			return (NULL);
	}
	if (temoi->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = temoi;
	new_node->next = temoi->next;
	temoi->next->prev = new_node;
	temoi->next = new_node;	
	
	return (new_node);
}
