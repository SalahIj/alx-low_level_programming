#include "lists.h"

/**
 *  * list_len - listing elements.
 *   * @h: the input of the function.
 *    * Return: the result.
 */

size_t list_len(const list_t *h)
{
	const list_t *node;
	int i = 0;

	node = h;
	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
