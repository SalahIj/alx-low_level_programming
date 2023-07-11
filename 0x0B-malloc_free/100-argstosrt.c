#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculting the number of ccharacters
 * @s: the input.
 * Return: the result of _strlen
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * argstostr -  concatening all arguments.
 * @ac: the first input.
 * @av: the seceond input.
 * Return: the result.
 */

char *argstostr(int ac, char **av)
{
	char *srt;
	int  i = 0, l = 0, k = 0, ind, lent, n;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		l = l + _strlen(av[i]);
		l++;
		i++;
	}
	l--;
	srt = malloc(sizeof(char) * (l + 1));
	if (srt == NULL)
	{
		return (NULL);
	}
	ind  = 0;
	while (k < ac)
	{
		lent = _strlen(av[k]);
		for (n = 0; n < lent; n++)
		{
			srt[ind++] = av[k][n];
		}
		srt[ind++] = '\n';
		k++;
	}
	srt[ind] = '\0';
	return (srt);
}

