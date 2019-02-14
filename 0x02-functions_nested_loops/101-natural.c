#include <stdio.h>
#include "holberton.h"
/**
 *main - entry function
 *
 *Return: return 0 (success)
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			j = j + i;
		}
	}
	printf("%i\n", j);
	return (0);
}
