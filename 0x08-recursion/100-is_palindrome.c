#include "main.h"

/**
* _len_recu - calculting the length.
* @s: the input of the function.
* Return: the result.
*/

int _len_recu(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _len_recu(s));
	}
	else
	{
		return (0);
	}
}

/**
 * verifi - the function
 * @srt: the first input.
 * @i: the second input.
 * @lent: the third input.
 * Return: the result.
 */

int verifi(char *srt, int i, int lent)
{
	if (srt[i] != srt[lent - 1])
	{
		return (0);
	}
	else if (i >= lent)
	{
		return (1);
	}
	else
	{
		return (verifi(srt, i + 1, lent - 1));
	}
}

/**
 * is_palindrome - function
 * @s: the input.
 * Return: the result
 */

int is_palindrome(char *s)
{
	if (_len_recu(s) == 0)
	{
		return (1);
	}
	else
	{
		return (verifi(s, 0, _len_recu(s)));
	}
}
