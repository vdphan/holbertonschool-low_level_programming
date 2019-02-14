#include <stdio.h>
#include "holberton.h"
/**
 *main - entry function
 *
 *Return: return 0 (success)
 */
int main(void)
{
	long i = 1;
	long j = 2;
	long b;
	long c = 2;

	while ((i + j) <= 4000000)
	{
		b = i + j;
		i = j;
		j = b;
		if ((b % 2) == 0)
		{
		c = c + b;
		}
	}
	printf("%ld", c);
	printf("\n");
	return (0);
	}
