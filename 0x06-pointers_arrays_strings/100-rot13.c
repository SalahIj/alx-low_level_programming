#include "main.h"

/**
* *rot13 - encoding characters in ROT13.
* @src: the input of the function.
* Return: the result
*/

char *rot13(char *src)
{
	unsigned int i, j;
	char tab[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; src[i]; i++)
	{
		for (j = 0; j <= sizeof(tab) / sizeof(char); j++)
		{
			if (src[i] == tab[j])
			{
				src[i] = rot[j];
				break;
			}
		}
	}
	return (src);
}
