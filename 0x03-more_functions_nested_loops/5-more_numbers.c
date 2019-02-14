#include "holberton.h"
/**
 *more_numbers - print 1 - 14 for 10 times.
 *void: a function does not return a value.
 */
void more_numbers(void)
{
	int a, j;

	for (a = 1; a <= 10; a++)
	{
		for (j = 0; j <= 14; j++)
		{
			if ((j / 10) != 0)
			{
				_putchar((j / 10) + '0');
			}
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
