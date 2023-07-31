#include "lists.h"

/**
 * add_nodeint - dding nodes
 * @head: the first input.
 * @n: the second input.
 * Return: the result.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *medi;

	if (head == NULL)
		return (NULL);

	medi = malloc(sizeof(listint_t));
	if (medi == NULL)
		return (NULL);

	medi->n = n;
	medi->next = NULL;

	if (*head == NULL)
		*head = medi;
	else
	{
		medi->next = *head;
		*head = medi;
	}
	return (*head);
}
