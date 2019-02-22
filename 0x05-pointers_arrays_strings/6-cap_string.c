#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string..
 *@s: string character value..
 *
 * Return: string value.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
		if ((s[i] <= 97 && s[i] >= 122) || (s[i] >= 90 && s[i] <= 65))
			i++;
		if (s[i] == ' ' || s[i] == '!' || s[i] == ',' || s[i] == '\t'
			       || s[i] == '\n' || s[i] == '{' || s[i] == '}'
			       || s[i] == ';' || s[i] == '?' || s[i] == '.'
			|| s[i] == ')' || s[i] == '(' || s[i] == '?')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
