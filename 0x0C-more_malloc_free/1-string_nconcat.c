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
	unsigned int l_1, l_2, l = 0, j, ind = 0;
	char *srt;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (l_1 = 0; s1[l_1]; l_1++)
	;
	for (l_2 = 0; s1[l_2]; l_2++)
	;
	if (n < l_2)
		l = l_1 + l_2;
	else
		l = l_1 + n;

	srt = (char *)malloc(sizeof(srt) * n + 1);
	if (srt == NULL)
		return (NULL);
	for (j = 0; j < l; j++)
	{
		if (j < l_1)
			srt[j] = s1[j];

		else
			srt[j] = s2[ind++];
	}
	srt[l] = '\0';
	return (srt);
}
