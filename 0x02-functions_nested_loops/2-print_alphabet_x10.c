#include "holberton.h"
/**
 *print all the alphabet
 *void: a function does not return a value
 */
void print_alphabet_x10(void)
{
	int a, i;
	for (a = 1; a <= 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
