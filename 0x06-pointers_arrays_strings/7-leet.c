#include "main.h"

/**
* leet - encoding characters.
* @sct: the input of the function.
* Return: the result
*/

char *leet(char *sct)
{
	int i, j;
	char tab[] = {65, 69, 76, 79, 84};
	char num[] = {52, 51, 49, 48, 55};

	for (i = 0; sct[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (sct[i] == tab[j] || sct[i] == tab[j] + 32)
			{
				sct[i] = num[j];
			}
		}
	}
	return (sct);
}
