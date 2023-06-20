#include "main.h"

/**
 * print_last_digit - function that print last digit.
 * @n: is the input of print_last_digit function.
 * Return: the last digit of a number.
 */

int print_last_digit(int n)
{
	int res;

	if (n > 0)
	{
		res = n % 10;
	}
	else
	{
		res = -1 * (n % 10);
	}
	_putchar(res + '0');
	return (res);
}
