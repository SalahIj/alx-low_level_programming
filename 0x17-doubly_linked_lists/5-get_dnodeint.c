#include "lists.h"

/**
 * get_dnodeint_at_index - the function name.
 * @head: the first input.
 * @index: the second input.
 * Return: the result.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		head = head->next;
		j++;
		if (j == index)
			break;
	}
	return (head);
}
