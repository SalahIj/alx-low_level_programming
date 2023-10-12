#include "lists.h"

/**
 * sum_dlistint - The function name.
 * @head: The input of the function.
 * Return: The result.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
