#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creating a string
 * @str: the input of the function
 * Return: the result
 */

char *_strdup(char *str)
{
	char *srt;
	unsigned int size = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	srt = malloc(sizeof(*str) * (size + 1));
	if (srt != NULL)
	{
		for (i = 0; i < size; i++)
		{
			srt[i] = str[i];
		}
		srt[size] = '\0';
		return (srt);
		free(srt);
	}
	else
	{
	return (NULL);
	}
}
