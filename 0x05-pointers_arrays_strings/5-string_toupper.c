#include "holberton.h"
/**
 * string_toupper - change every string character to uppercase.
 *@s: string character value..
 *
 * Return: string value.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	return (s);
}
