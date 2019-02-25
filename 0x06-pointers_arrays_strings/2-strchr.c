#include "holberton.h"
/**
 * _strchr -  locates a character in a string.
 *@s: string character value.
 *@c: character value.
 *
 * Return: new string value.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (s = '\0');
}
