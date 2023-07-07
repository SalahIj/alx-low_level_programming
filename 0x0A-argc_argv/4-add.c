#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - the principal
 * Return: 0 Always seccsees
 * @argc: the first input
 * @argv: the second input
 */

int main(int argc, char **argv)
{
	int j = 1;
	unsigned int s = 0, r;
	char *t;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (j < argc)
		{
			t = argv[j];
			r = 0;
			while (r < strlen(t))
			{
				if (t[r] < 48 || t[r] > 57)
				{
					printf("Error\n");
					return (1);
				}
				r++;
			}
			s += atoi(t);
			t++;
			j++;
		}
		printf("%d\n", s);
	}
	return (0);
}
