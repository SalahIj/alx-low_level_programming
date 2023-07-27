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
