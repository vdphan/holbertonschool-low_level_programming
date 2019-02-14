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

	for (a = 1; a <= 50; a++)
	{
		if (i != 1)
			printf(", ");
		printf("%ld", i);
		b = i + j;
		i = j;
		j = b;

	}
	printf("\n");
	return (0);
}
