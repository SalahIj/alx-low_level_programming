#include "main.h"

/**
 * get_endianness - the name of the function.
 * Return: The Result.
 */

int get_endianness(void)
{
	unsigned long int m;
	char *string;

	m = 1;
	string = ((char *)&m);

	return (*string);
}
