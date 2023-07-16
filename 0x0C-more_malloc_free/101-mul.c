#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_atoi - converting char to int.
 * @s: the input of the function.
 * Return: the result.
 */

int _atoi(char *s)
{
	int signe = 1;
	unsigned long int r = 0, i = 0;

	while (s[i] < 48 || s[i] > 57)
	{
		if (s[i] == '-')
			signe *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		r *= 10;
		r += (s[i] - 48);
		i++;
	}
	return (signe * r);
}

/**
 * printing_numbers - printing numbers.
 * @n: the input of the function.
 */

void printing_numbers(unsigned long int n)
{
	int divisor, p;

	for (divisor = 1; n / divisor > 9; divisor *= 10)
	;
	for (; n != 0 || divisor >= 1; divisor /= 10)
	{
		p = n / divisor;
		_putchar(p + '0');
		n = n - p * divisor;
	}
}

/**
 * *_puts - printing strings.
 * @s: the input of the function.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}

/**
 * main - the entry.
 * @argc: the first input.
 * @argv: the second input.
 * Return: 0 Always success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	else
	{
		printing_numbers(_atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');
	}
	return (0);
}
