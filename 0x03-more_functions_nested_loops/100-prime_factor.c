#include "holberton.h"
#include <stdio.h>
#include <math.h>
/**
 *main - find largest prime factor
 *
 *Return: 0 ( success)
 */
int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 3; i <= sqrt(n); i++)
	{
		while ((n % i) == 0)
		{
			n = n / i;
		}
	}
	printf("%ld", n);
	printf("\n");
	return (0);
}
