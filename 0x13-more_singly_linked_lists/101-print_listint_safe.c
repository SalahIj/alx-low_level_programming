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
			for (slowptr = head; slowptr != head; slowptr = slowptr->next)
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
 * print_listint_safe - printing.
 * @head: the input of the function.
 * Return: the result.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t boucle, i = 0;

	boucle = find_loop_and_lenth(head);
	if (head == NULL)
	{
		return (0);
		exit(98);
	}
	if (boucle == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			boucle++;
		}
	}
	else
	{
		for (i = 0; i <= boucle + 1; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (boucle);
}

