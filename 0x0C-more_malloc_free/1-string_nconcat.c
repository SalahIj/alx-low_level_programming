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
	unsigned int l_1 = 0, l_2 = 0, i, ind;
	char *srt;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l_1])
	{
		l_1++;
	}
	while (s1[l_2])
	{
		l_2++;
	}
	srt = (char *)malloc(sizeof(srt) * (l_1 + n + 1));
	if (srt == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l_1; i++)
	{
		srt[i] = s1[i];
	}
	for (ind = 0; ind <= n; ind++)
	{
		srt[i] = s2[ind];
		i++;
	}
	srt[i] = '\0';
	return (srt);
}
