#include "holberton.h"
/**
 *print_square - print square size
 *@size: integer value.
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if ((j * i) <= 0)
			{
				_putchar('\n');
				break;
			}
			if ((j * i) > 0)
				_putchar('#');
			if ((j == size) && (i < size))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
