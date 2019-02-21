#include "holberton.h"
#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @src: character value.
 *
 */
int _strlen(char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		;
	return (i);
}
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
	b = 0;
	while (src[b] != '\0' && b >= n)
	{
		dest[a] = src[b + n];
		b++;
		a++;
	}
	if (_strlen(src) >= n)
		dest[a] = '\0';
	return (dest);
}
