#include <stdio.h>
#include <math.h>

/**
* Prime_fac - finds and prints the largest prime factor of a number.
* @n: the input of the function
* Return: the largest prime factor.
*/

long int Prime_fac(long int n)
{
	long int larg_Fac;
	long int i;

	while (n % 2 == 0)
	{
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			larg_Fac = i;
			n /= i;
		}
	}
	if (n > 2)
		larg_Fac = n;
	return (larg_Fac);
}


/**
 * main - Entry point.
 * Return: Always 0 success
 */


int main(void)
{
	long int m = Prime_fac(612852475143);

	printf("%ld\n", m);
	return (0);
}
