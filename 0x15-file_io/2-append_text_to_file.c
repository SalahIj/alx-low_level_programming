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
 * append_text_to_file -  appendding to a file.
 * @filename: the first input of the function.
 * @text_content: the seocnd input.
 * Return: the result.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, lenght = 0, number = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fp = open(filename, O_RDONLY, 0400);
		return (fp == -1 ? -1 : 1);
	}

	lenght = _strlen(text_content);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	number = write(fp, text_content, lenght);
	if (number == -1 || number != lenght)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
