#include "lists.h"

/**
 * find_loop_and_lenth - finding loop.
 * @head: the input of the function.
 * Return: the result.
 */
size_t find_loop_and_lenth(const listint_t *head)
{
	const listint_t *slowptr, *fastptr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
		exit(98);
	}
	slowptr = head->next;
	fastptr = head->next->next;

	for (; fastptr; fastptr = fastptr->next->next)
	{
		if (slowptr == fastptr)
		{
			for (slowptr = head; slowptr != fastptr; slowptr = slowptr->next)
			{
				nodes++;
				fastptr = fastptr->next;
			}
			slowptr = slowptr->next;
			for (; slowptr != fastptr; slowptr = slowptr->next)
				nodes++;

			return (nodes);
		}
		slowptr = slowptr->next;
	}
	return (0);
}

/**
 *  * free_listint_safe - freeing.
 *   * @h: the input of the function.
 *    * Return: the result.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t boucle, i = 0, counter = 0;
	listint_t *node;

	boucle = find_loop_and_lenth(*h);
	if (h == NULL || *h == NULL)
	{
		return (0);
		exit(98);
	}
	if (boucle == 0)
	{
		while (h != NULL && *h != NULL)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			counter++;
		}
	}
	else
	{
		for (i = 0; i < boucle; i++)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			counter++;
		}
		*h = NULL;
	}
	h = NULL;
	return (counter);
}

