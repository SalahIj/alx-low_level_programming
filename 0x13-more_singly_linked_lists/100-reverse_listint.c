#include "lists.h"

/**
 * reverse_listint - reversing
 * @head: the input of the function.
 * Return: the result.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *stock, *nex;

	if (head == NULL || *head == NULL)
		return (NULL);

	stock = NULL;
	nex = NULL;
	for (stock = *head, *head = NULL; stock; stock = nex)
	{
		nex = stock->next;
		stock->next = *head;
		*head = stock;
	}
	return (*head);
}
