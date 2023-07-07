#include "main.h"

/**
* _strcmp -  comparing two string.
* @s1: the first input.
* @s2: the second input.
* Return: the result.
*/

int _strcmp(char *s1, char *s2)
{
	int i, res = 0;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return ((int)res);
}
