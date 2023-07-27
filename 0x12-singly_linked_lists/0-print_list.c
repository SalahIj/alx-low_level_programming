#include "lists.h"

/**
 * print_list - printing
 * @h: the input of the function.
 * Return: the result.
*/

size_t print_list(const list_t *h)
{
	const list_t *node;
	int n = 0;

	node = h;
	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0]%s", "(nil)");
		else
			printf("[%d] %s", node->len, node->str);

		node = node->next;
		n++;
		printf("\n");
	}
	return (n);
}
