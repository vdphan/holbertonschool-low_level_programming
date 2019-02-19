#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: character value
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (((str[i] % 2) == 0) && (str[i] != 0))
			_putchar(str[i]);
	}
	_putchar('\n');
}
