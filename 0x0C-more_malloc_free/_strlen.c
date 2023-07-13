#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculiting characters
 * @s: the input.
 * return: the result.
 */

int _strlen(char *s)
{
	int l;

	for(l = 0; s[l]; l++)
	;
	return (l);
}
