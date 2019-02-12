#include "holberton.h"
/**
 *print_last_digit - print last digit of number
 *@r : passed value
 *
 *Return: execute last digit
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i <= 23 ; i++)
	{
		for (j = 0 ; j <= 59 ; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
