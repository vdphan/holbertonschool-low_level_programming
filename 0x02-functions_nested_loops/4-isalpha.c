#include "holberton.h"
/**
 *_isalpha - print all the alphabetic
 *@c: ASCII value
 *
 *Return: 1 (lowercase and uppercase), else (return 0)
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
