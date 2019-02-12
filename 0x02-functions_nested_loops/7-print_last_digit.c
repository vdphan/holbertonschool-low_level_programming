#include "holberton.h"
/**
 *print_last_digit - print last digit of number
 *@r : passed value
 *
 *Return: execute last digit
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
