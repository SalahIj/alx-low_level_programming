#include "lists.h"

/**
 * delete_dnodeint_at_index - the function name
 * @head: the first input.
 * @index: the second input.
 * Return: the result.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dmd = *head;
	unsigned int position;

	if (!*head)
		return (-1);
	position = 0;
	while (position != index)
	{
		if (dmd == NULL)
			return (-1);
		dmd = dmd->next;
		position++;
	}
	if (dmd != *head)
	{
		dmd->prev->next = dmd->next;
		if (dmd->next)
			dmd->next->prev = dmd->prev;
	}
	else
	{
		*head = dmd->next;
		if (*head)
			(*head)->prev = NULL;
	}
	free(dmd);
	return (1);
}
