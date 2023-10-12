#include "lists.h"

/**
 * dlistint_len - The name of the function.
 * @h: The input of the function.
 * Return: the result.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	for (; h; h = h->next)
		number++;
	return (number);
}
