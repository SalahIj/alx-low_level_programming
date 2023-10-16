#include "main.h"

/**
 * _strncpy -  coping two string with n bytes.
 * @dest: the first input.
 * @src: the second input.
 * @n:  bytes.
 * Return: the first input.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && *(src + l) != '\0'; l++)
	{
		dest[l] = src[l];
	}
	while (l < n)
	{
		*(dest + l) = '\0';
		l++;
	}
	return (dest);
}
