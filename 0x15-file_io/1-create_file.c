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
	int fp, lenght, test;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fp = open(filename, O_CREAT | O_TRUNC, 0600);
		return (fp == -1 ? -1 : 1);
	}
	lenght = _strlen(text_content);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		close(fp);
		return (-1);
	}
	test = write(fp, text_content, lenght);
	if (test == -1 || test != lenght)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
