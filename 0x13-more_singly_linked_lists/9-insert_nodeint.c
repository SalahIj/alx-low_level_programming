#include "lists.h"

/**
 * insert_nodeint_at_index - insering
 * @head: the first input.
 * @idx: the second input
 * @n: the third input.
 * Return: the result.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *add, *counter;
	unsigned int i = 0, count = 0;

	if (head == NULL)
		return (NULL);
	for (counter = *head; counter->next; counter = counter->next)
		count++;

	if (count < idx)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}

	add = *head;
	while (add != NULL)
	{
		if (i == idx - 1)
		{
			tmp->next = add->next;
			add->next = tmp;
			return (tmp);
		}
		i++;
		add = add->next;
	}
	free(tmp);
}
