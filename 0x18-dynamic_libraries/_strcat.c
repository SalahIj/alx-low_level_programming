#include "main.h"

/**
 * _strcat - concatening two strings
 * @dest: first input
 * @src: second input
 * Return: the first input
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
