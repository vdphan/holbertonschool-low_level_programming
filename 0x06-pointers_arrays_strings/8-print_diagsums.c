#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix.
 *@a: integer value.
 *@size: integer value.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	for (i = 0; i < size; i++)
	{
		while (d < size * size)
		{
			b = b + a[d];
			d = d + size + 1;
		}
		e = e + size - 1;
		c = c + a[e];
	}
	printf("%d, %d\n", b, c);
}
