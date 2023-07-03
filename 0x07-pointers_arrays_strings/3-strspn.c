#include <stdio.h>

/**
* _strspn - calculeting the length.
* @s: the first input.
* @accept: the second input.
* Return: the result.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int sum = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				sum++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}
