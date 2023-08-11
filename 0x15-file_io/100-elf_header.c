#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

void Check_ELF_files(unsigned char *magic_bytes);
void print_Magic_numbers(unsigned char *magic_bytes);
void Data(unsigned char *magic_bytes);
void Class(unsigned char *magic_bytes);
void Version(unsigned char *magic_by);
void Type(unsigned int e_type, unsigned char *tab);
void OS_ABI(unsigned char *magic_by);
void ABI(unsigned char *tab);
void Entry(unsigned long int entr, unsigned char *tab);
void Close(int tab);

/**
 *  * Check_ELF_files - chacking.
 *   * @m: the input.
 */

void Check_ELF_files(unsigned char *m)
{
	int i = 0;

	while (i < 4)
	{
		if (m[i] != 127 && m[i] != 'E' && m[i] != 'L' && m[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		i++;
	}
}

/**
 *  * print_Magic_numbers - printing.
 *   * @magic_bytes: the input.
 */

void print_Magic_numbers(unsigned char *magic_bytes)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < 16)
	{
		printf("%02x", magic_bytes[i]);
		if (i == 15)
			printf("\n");

		else
			printf(" ");
		i++;
	}
}

/**
 *  * Data - affacting.
 *   * @magic_bytes: the input.
 */

void Data(unsigned char *magic_bytes)
{
	char *tab2[3] = {"none", "2's complement, little endian",
		"2's complement, big endian"};
	int i = 0, k = 0;

	printf("  Data:                              ");
	while (i < 3)
	{
		if (magic_bytes[EI_DATA] == i)
		{
			printf("%s\n", tab2[i]);
			k = 1;
			break;
		}
		i++;
	}
	if (k == 0)
		printf("<unknown: %x>\n", magic_bytes[EI_DATA]);
}

/**
 *  * Class - classing
 *   * @magic_bytes: the input of the function.
 */

void Class(unsigned char *magic_bytes)
{
	char *tab1[3] = {"none", "ELF32", "ELF64"};
	int i, k = 0;

	printf("  Class:                             ");
	for (i = 0; i < 3; i++)
	{
		if (magic_bytes[EI_CLASS] == i)
		{
			printf("%s\n", tab1[i]);
			k = 1;
			break;
		}
	}
	if (k == 0)
		printf("<unknown: %x>\n", magic_bytes[EI_CLASS]);
}

/**
 *  * Version - versing
 *   * @magic_by: the input.
 */

void Version(unsigned char *magic_by)
{
	printf("  Version:                           %d", magic_by[EI_VERSION]);
if (magic_by[EI_VERSION] == 1)
	printf(" (current)\n");
else if (EV_CURRENT == 2)
	printf("\n");
else
	printf("\n");
}

/**
 *  * Type - typing
 *   * @tab: the input of the function.
 *    * @e_type: the second input.
 */

void Type(unsigned int e_type, unsigned char *tab)
{
	int k = 0;
	unsigned int i;
	char *tab1[5] = {"NONE (None)", "REL (Relocatable file)",
		"EXEC (Executable file)", "DYN (Shared object file)",
		"CORE (Core file)"};

	printf("  Type:                              ");
	if (tab[EI_DATA] == 2)
		e_type >>= 8;

	for (i = 0; i < 5; i++)
	{
		if (e_type == i)
		{
			printf("%s\n", tab1[i]);
			k = 1;
			break;
		}
	}
	if (k == 0)
		printf("<unknown: %x>\n", e_type);
}

/**
 *  * OS_ABI - function work.
 *   * @magic_by: the input of the function
 */

void OS_ABI(unsigned char *magic_by)
{
	int i, k = 0;
	int tab1[11] = {0, 1, 2, 3, 6, 7, 8, 9, 10, 97, 255};
	char *tab2[11] = {"UNIX - System V", "UNIX - HP-UX", "UNIX - NetBSD",
		"UNIX - Linux", "UNIX - Solaris", "UNIX - AIX",
		"UNIX - IRIX", "UNIX - FreeBSD", "UNIX - TRU64",
		"ARM", "Standalone App"};

	printf("  OS/ABI:                            ");
	for (i = 0; i < 11; i++)
	{
		if (magic_by[EI_OSABI] == tab1[i])
		{
			printf("%s\n", tab2[i]);
			k = 1;
			break;
		}
	}
	if (k == 0)
		printf("<unknown: %x>\n", magic_by[EI_OSABI]);
}

/**
 *  * ABI - the function.
 *   * @tab: the input of the function.
 */

void ABI(unsigned char *tab)
{
	printf("  ABI Version:                       %d\n", tab[EI_ABIVERSION]);
}

/**
 *  * Entry - the function name.
 *   * @entr: the first input.
 *    * @tab: the second input.
 */

void Entry(unsigned long int entr, unsigned char *tab)
{
	unsigned long int a, b;

	printf("  Entry point address:               ");
	if (tab[EI_DATA] == 2)
	{
		a = (entr << 8) & 0xFF00FF00;
		b = (entr >> 8) & 0xFF00FF;
		entr = (a | b);
		entr = (entr << 16) | (entr >> 16);
	}
	if (tab[EI_CLASS] == 1)
		printf("%#x\n", (unsigned int)entr);

	else
		printf("%#lx\n", entr);
}

/**
 *  * Close - closing.
 *   * @tab: the input of the function.
 */

void Close(int tab)
{
	if (close(tab) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tab);
		exit(98);
	}
}

/**
 *  * main - the entry.
 *   * @argc: the first input.
 *    * @argv: the second input.
 *     * Return: the result in seccuss.
 */

int main(int argc, char **argv)
{
	int fp, numb;
	Elf64_Ehdr *tete;

	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	tete = malloc(sizeof(Elf64_Ehdr));
	if (tete == NULL)
	{
		Close(fp);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	numb = read(fp, tete, sizeof(Elf64_Ehdr));
	if (numb == -1)
	{
		free(tete);
		Close(fp);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	Check_ELF_files(tete->e_ident);
	printf("ELF Header:\n");
	print_Magic_numbers(tete->e_ident);
	Class(tete->e_ident);
	Data(tete->e_ident);
	Version(tete->e_ident);
	OS_ABI(tete->e_ident);
	ABI(tete->e_ident);
	Type(tete->e_type, tete->e_ident);
	Entry(tete->e_entry, tete->e_ident);

	free(tete);
	Close(fp);
	return (0);
}
