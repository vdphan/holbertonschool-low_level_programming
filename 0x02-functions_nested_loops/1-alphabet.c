#include "holberton.h"
/**
 *print_alphabet - print all the alphabet
 *void: a function does not return a value
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
