#include "lists.h"

/**
 * print_listint - printing nodes.
 * @h: the input of the function.
 * Return: the result.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *proc;
	int i = 0;

	if (h != NULL)
	{
		proc = h;
		while (proc != NULL)
		{
			printf("%d\n", proc->n);
			i++;
			proc = proc->next;
		}
	}
	return (i);
}
