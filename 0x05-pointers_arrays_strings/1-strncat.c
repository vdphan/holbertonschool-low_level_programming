#include "holberton.h"
/**
 * _strncat - concentrate two string with n byte.
 *@dest: character value.
 *@src: character value.
 *@n: integer value.
 *
 * Return: dest value.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	if (b >= n)
		dest[a] = '\0';
	return (dest);
}
