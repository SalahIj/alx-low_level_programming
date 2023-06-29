#include "main.h"

/**
* _strcmp -  comparing two string.
* @s1: the first input.
* @s2: the second input.
* Return: the result.
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
