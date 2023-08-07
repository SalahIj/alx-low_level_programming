#include "main.h"

/**
 *  _strlen - calculting lenght.
 * @s: the input of the function.
 * Return: the result.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * create_file - creating files.
 * @filename: the first input.
 * @text_content: the second input.
 * Return: the result.
 */

int create_file(const char *filename, char *text_content)
{
	int fp = 0, lenght = 0, test = 0;

	lenght = _strlen(text_content);
	if (filename == NULL)
		return (-1);

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (fp == -1)
		return (-1);

	if (lenght != 0)
	{
		test = write(fp, text_content, lenght);
		if (test == -1)
			return (-1);
	}
	close(fp);
	return (1);
}
