#include "holberton.h"
/**
 *_strstr -  gets the length of a prefix substring.
 *@haystack: string character value.
 *@needle: character value.
 *
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
			return (haystack);
	}
	return (0);
}
