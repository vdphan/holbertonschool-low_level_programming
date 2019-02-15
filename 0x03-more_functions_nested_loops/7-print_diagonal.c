#include "holberton.h"
/**
 *print_diagonal - print diagonal
 *@n: integer value.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else if (n > 0)
		{
			if (i > 1)
			{
				for (j = 0; j < (i - 1) ; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			if (i < n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
