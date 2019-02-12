#include "holberton.h"
/**
 *print_sign - print the sign of number
 *@n: ASCII value
 *
 *Return: 1 (lowercase), else (return 0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
