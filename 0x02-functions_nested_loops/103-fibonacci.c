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
	int a;
	long b;
	long c;

	for (a = 1; a <= 50; a++)
	{
		b = i + j;
		i = j;
		j = b;
		if ((b <= 4000000) && ((b % 2) == 0) && (b != 2))
		{
			c = j + b;
		}
	}
	printf("%ld", c);
	printf("\n");
	return (0);
}
