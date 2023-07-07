#include <stdio.h>
#include <stdlib.h>


/**
 * main - the principal
 * Return: 0 Always seccsees
 * @argc: the first input
 * @argv: the second input
 */

int main(int argc, char *argv[])
{
	int coins, t = 0, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coins = atoi(argv[1]);
		if (coins < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			i = 0;
			while (i < 5)
			{
				if (coins >= cents[i])
				{
					t += coins / cents[i];
					coins = coins % cents[i];
					if (coins % cents[i] != 0)
					{
						continue;
					}
				}
				i++;
			}
			printf("%d\n", t);
		}
	}
	return (0);
}
