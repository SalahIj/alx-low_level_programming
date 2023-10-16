#include "main.h"

/**
 * _strcpy - coping the strings
 * @dest: the first input.
 * @src: the second input.
 * Return: the value of coping.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
