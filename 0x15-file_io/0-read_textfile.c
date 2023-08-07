#include "main.h"

/**
 * read_textfile - reading text.
 * @filename: the first input.
 * @letters: the second input.
 * Return: the result.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int number, number_of_letters_R = 0, numb = 0;
	char buffer[BUFFER_SIZE * 8];

	if (filename == NULL || letters == 0)
		return (0);

	number = open(filename, O_RDONLY, 644);
	if (number == -1)
		return (0);

	number_of_letters_R = read(number, buffer, letters);
	numb = write(STDOUT_FILENO, buffer, number_of_letters_R);
	if (numb == -1)
		return (0);
	close(number);
	return (number_of_letters_R);
}
