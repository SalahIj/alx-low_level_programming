#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatening strings.
 * @s1: the first input.
 * @s2: the second input.
 * @n: the third input.
 * Return: the result.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *srt;
	int l_1, l_2, i, ind;

	l_1 = _strlen(s1);
	l_2 = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	srt = (char *)malloc(sizeof(char) * (l_1 + n + 1));
	if (srt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l_1; i++)
	{
		srt[i] = s1[i];
	}
	if (n < l_2)
	{
		for (ind = 0; ind < n; ind++)
		{
			srt[i] = s2[ind];
			i++;
		}
		srt[l_1 + n] = '\0';
	}
	else
	{
		for (ind = 0; ind < l_2; ind++)
		{
			srt[i] = s2[ind];
			i++;
		}
		for (i = l_1 + l_2; i < l_1 + n; i++)
		{
			srt[i] = "";
		}
		srt[l_1 + n] = '\0';
	}
	return (srt);
}
