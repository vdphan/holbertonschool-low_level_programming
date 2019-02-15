#include "holberton.h"
/**
 *print_triangle - print diagonal
 *@size: integer value.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	i = 1;
	while (i <= size)
	{
		j = 0;
		while (j < (size - i))
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k < (size - j))
		{
			_putchar('#');
			k++;
		}
		i++;
		_putchar('\n');
	}
}
