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

	if (idx == 0)
		return (add_dnodeint(h, n));
	temoi = *h;
	for (; idx != 1; idx--)
	{
		temoi = temoi->next;
		if (temoi == NULL)
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
