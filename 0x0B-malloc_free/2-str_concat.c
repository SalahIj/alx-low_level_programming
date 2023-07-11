#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatening strings.
 * @s1: the first input.
 * @s2: the second input.
 * Return: the result.
 */

char *str_concat(char *s1, char *s2)
{
	char *srt;
	unsigned  int size1 = 0, size2 = 0, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	srt = malloc(sizeof(*srt) * (size1 + size2 + 1));
	if (srt == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < size1; j++)
		{
			srt[j] = s1[j];
		}
		for (; j < size1 + size2; j++)
		{
			srt[j] = s2[j - size1];
		}
		srt[size1 + size2] = '\0';
	}
	return (srt);
}
