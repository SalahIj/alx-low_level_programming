#include "main.h"

/**
 *  * print_ERRO_EX - printing error and exit
 *   * @filename: the first input.
 *    * @message: the second input.
 *     * @sort: the third input.
 */

void print_ERRO_EX(char *filename, char *message, int sort)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(sort);
}

/**
 *  * main- the entry.
 *   * @argc: the first input.
 *    * @argv: the second input.
 *     * Return: Always 0 success.
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_numb = 1024, write_numb = 0, close1, close2;
	char buffer[BUFFER_SIZE * 8];

	if (argc != 3)
		print_ERRO_EX("", "Usage: cp file_from file_to\n", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_ERRO_EX(argv[1], "Error: Can't read from file %s\n", 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permission);
	if (file_to == -1)
		print_ERRO_EX(argv[2], "Error: Can't write to %s\n", 99);

	while (read_numb = 1024)
	{
		read_numb = read(file_from, buffer, BUFFER_SIZE);
		if (read_numb == -1)
			print_ERRO_EX(argv[1], "Error: Can't read from file %s\n", 98);

		write_numb = write(file_to, buffer, read_numb);
		if (write_numb == -1 || write_numb < read_numb)
			print_ERRO_EX(argv[2], "Error: Can't write to %s\n", 99);
	}
	close1 = close(file_from);
	if (close1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	close2 = close(file_to);
	if (close2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
