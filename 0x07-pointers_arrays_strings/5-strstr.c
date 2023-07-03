#include <stdio.h>
#include "main.h"

/**
* _strstr - locating characters
* @haystack: the first input.
* @needle: the second input.
* Return: the result.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p, *q;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		p = haystack + i;
		q = needle;
		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}
		if (*q == '\0')
		return (haystack + i);
	}
	return (NULL);
}
