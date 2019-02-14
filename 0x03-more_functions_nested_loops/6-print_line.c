#include "holberton.h"
/**
 *print_line - print straight line
 *@n: integer value.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n == 0)
			_putchar('\n');
		if (n > 0)
			_putchar('_');
		if (n < 0)
			_putchar('\n');
	}
	_putchar('\n');
}
