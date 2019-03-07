#include "holberton.h"

/**
 * string_nconcat -  concatenates two strings.
 *@s1: character value of string 1.
 *@s2: character value of string 2.
 *@n : unsigned int.
 *
 * Return: the final string c.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, k;
	unsigned int b;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	k = a + n + 1;
	c = malloc(sizeof(char) * k);
	if (c == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		c[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; b++)
		c[a + b] = s2[b];
	c[a + b] = '\0';
	return (c);
}
