#include "holberton.h"
/**
 * leet - convert to leet.
 *@s: string character value..
 *
 * Return: string value.
 */
char *leet(char *s)
{
	char lee[] = "4433007711";
	char c[] = "AaEeOoTtLl";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j]; j++)
		{
			if (c[j] == s[i])
				s[i] = lee[j];
		}
	}
	return (s);
}
