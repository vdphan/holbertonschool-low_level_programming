#include "holberton.h"
/**
 * _strncpy -  a function that copies the string.
 * @dest : character value
 * @src  : character value
 * @n: integer vaclue.
 *
 *Return: return the pointer to desk.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
