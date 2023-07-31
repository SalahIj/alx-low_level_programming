#include "lists.h"

/**
 * listint_len - printing the number of nodes.
 * @h: the input of the function.
 * Return: the result.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t i = 0;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
