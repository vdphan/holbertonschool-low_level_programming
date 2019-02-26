#include "holberton.h"
/**
 *_strspn -  gets the length of a prefix substring.
 *@s: string character value.
 *@accept: character value.
 *
 * Return: new string value.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int n = 0;

	for (i = 0; s[i]; i++)
	{
		if (n != i)
			break;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
	}
	return (n);
}
