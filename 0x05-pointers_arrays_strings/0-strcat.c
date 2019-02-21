#include "holberton.h"
/**
 * _strcat - concentrate two string.
 *@dest: character value.
 *@src: character value.
 *
 * Return: dest value.
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
