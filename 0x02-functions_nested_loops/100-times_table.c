#include "holberton.h"
/**
 *print_three - print three digit
 *@i: integer value
 *@j: integer value
 */
void print_three(int i, int j)
{
	_putchar((j * i) / 100 + '0');
	_putchar((((j * i) % 100) / 10) + '0');
	_putchar((((j * i) % 100) % 10) + '0');
}
/**
 *print_two - print two digit
 *@i: integer value
 *@j: integer value
 */
void print_two(int i, int j)
{
	_putchar((j * i) / 10 + '0');
	_putchar((j * i) % 10 + '0');
}
/**
 *print_times_table - print time table
 *@n: integer value
 */
void print_times_table(int n)
{
	int i, j;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if  (j != 0)
				{
					_putchar(',');
					if ((j * i) >= 100)
					{
						_putchar(' ');
					} else if ((j * i) >= 10)
					{
						_putchar(' ');
						_putchar(' ');
					} else if ((j * i) < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					}
				if ((j * i) >= 100)
					print_three(i, j);
				else if (((j * i) >= 10) && ((j * i) < 100))
					print_two(i, j);
				else
					_putchar((j * i) % 10 + '0');
				if ((j == n) && (i < n))
					_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
