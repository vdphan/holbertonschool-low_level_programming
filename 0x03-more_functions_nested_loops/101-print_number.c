#include "holberton.h"
/**
 *print_number - find largest prime factor
 *@n: integer value.
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	i = n;
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
