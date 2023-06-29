#include "main.h"

/**
* reverse_array -  reversing.
* @a: the first input.
* @n: the second input.
*/

void reverse_array(int *a, int n)
{
	int i, tem = 0;

	for (i = 0; i < (n / 2); i++)
	{
		tem = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tem;
	}
}
