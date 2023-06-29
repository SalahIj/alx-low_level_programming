#include "main.h"

/**
* _strncat -  concatening two string with n bytes.
* @dest: the first input.
* @src: the second input.
* @n: bytes.
* Return: the first input.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		*(dest + i++) = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
