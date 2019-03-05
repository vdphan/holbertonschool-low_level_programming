#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concentrate 2 strings.
 * @s1: character value.
 * @s2: character value.
 *
 * Return: final string .
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, k;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	k = a + b + 1;
	c = malloc(sizeof(char) * k);
	if (c == NULL)
		return (NULL);
	if (c != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			c[a] = s1[a];
			k++;
		}
		b = 0;
		while (s2[b] != '\0')
		{
			c[a + b] = s2[b];
			b++;
			k++;
		}
	}
	c[k] = '\0';
	return (c);
}
