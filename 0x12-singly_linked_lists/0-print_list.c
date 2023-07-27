#include "lists.h"

/**
 *  * _strlen - calculiting.
 *   * @s: the input.
 *    * Return: the result.
 */

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);

	while (*(s + i))
		i++;
	return (i);
}

/**
 *  * print_list - printing
 *   * @h: the input of the function.
 *    * Return: the result.
 */

size_t print_list(const list_t *h)
{
	const list_t *node;
	int n = 0;

	if (h == NULL)
		return (0);

	node = h;
	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0]%s", "(nil)");
		else
			printf("[%d] %s", _strlen(node->str), node->str);

		node = node->next;
		n++;
		printf("\n");
	}
	return (n);
}
