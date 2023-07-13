#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatening strings.
 * @s1: the first input.
 * @s2: the second input.
 * @n: the third input.
 * Return: the result.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l_1, l_2, i, ind;
	char *srt;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[l_1])
		l_1++;

	while (s1[l_2])
		l_2++;

	srt = (char *)malloc(sizeof(srt) * (l_1 + n + 1));
	for (i = 0; i < l_1; i++)
	{
		srt[i] = s1[i];
	}
	ind = 0;
	while (ind < n)
		srt[i++] = s2[ind++];

	srt[i] = '\0';
	return (srt);
}
