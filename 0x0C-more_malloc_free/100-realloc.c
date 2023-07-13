#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - allocintg old espace.
 * @ptr: the first input.
 * @old_size: the second input.
 * @new_size: the third input.
 * Return: the result.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		return (m);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);

		else
		{
			i = 0;
			while (i < new_size && i < old_size)
			{
				*((char *)m + i) = *((char *)ptr + i);
				i++;
			}
		}
		free(ptr);
	}
	return (m);
}

