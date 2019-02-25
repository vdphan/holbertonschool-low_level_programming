#include "holberton.h"
/**
 * _memset -  fills memory with a constant n byte..
 *@s: string character value.
 *@b: character value.
 *@n: unsighed integer value.
 *
 * Return: string value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
