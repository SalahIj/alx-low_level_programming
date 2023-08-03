#include "lists.h"

/**
 * get_nodeint_at_index - finding nodes.
 * @head: the first input.
 * @index: the second input.
 * Return: the result.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp, *counter;
	unsigned int i = 0, count = 0;

	if (head == NULL)
		return (NULL);

	for (counter = head; counter->next; counter = counter->next)
		count++;

	if (index > count)
		return (NULL);

	tmp = head;
	while (tmp->next && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
