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
	int i;
	int  j = 0;

	if (needle[j] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++, i++)
			{
				haystack[i] = needle[j];
				return (haystack + i);
			}
		}
	}
	return (0);
}
