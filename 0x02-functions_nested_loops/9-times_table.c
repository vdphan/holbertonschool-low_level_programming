#include "holberton.h"
/**
 *times_table - print time table
 *
 *void: a function does not return a value
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if  (j != 0)
			{
				_putchar(',');
				if ((j * i) >= 10)
				{
					_putchar(' ');
				}else if ((j * i) < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if ((j * i) < 10)
				_putchar((j * i) % 10 + '0');
			if ((j * i) >= 10)
			{
				_putchar((j * i) / 10 + '0');
				_putchar((j * i) % 10 + '0');
			}
			if ((((j * i) % 9) == 0) && (j == 9) && (i < 9))
			{
			_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
