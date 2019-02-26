#include "holberton.h"
/**
 *_strpbrk -  earches a string for any of a set of bytes.
 *@s: string character value.
 *@accept: character value.
 *
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + j - 1);
		}
	}
	return (0);
}
