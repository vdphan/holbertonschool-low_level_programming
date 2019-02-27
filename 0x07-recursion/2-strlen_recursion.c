#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string.
 *@s: character value.
 *
 * Return: the length i of string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = _strlen_recursion(s + 1) + 1;

	}
	return (i);

}
