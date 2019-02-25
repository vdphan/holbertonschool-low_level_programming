#include "holberton.h"
/**
 * _memcpy -  fills memory with a constant n byte..
 *@dest: destination character value.
 *@src: character value.
 *@n: unsighed integer value.
 *
 * Return: string value.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
