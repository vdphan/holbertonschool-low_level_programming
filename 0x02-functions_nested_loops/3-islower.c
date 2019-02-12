#include "holberton.h"
/**
 *_islower - print all the lowercase alphabet
 *@c: ASCII value
 *
 *Return: 1 (lowercase), else (return 0)
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
