#include "lists.h"

/**
 * delete_nodeint_at_index - deleting nodes
 * @head: the first input.
 * @index: the second input.
 * Return: the result.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmp, *abs;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	ptr = *head;
	while (ptr != NULL)
	{
		if (i == index - 1)
		{
			abs = ptr;
		}
		if (i == index)
		{
			abs->next = ptr->next;
			ptr->next = NULL;
			free(ptr);
			return (1);
		}
		i++;
		ptr = ptr->next;
	}
	return (-1);
}
