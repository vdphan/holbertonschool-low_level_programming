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
	int k;

	if (needle[j] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] != needle[j])
					return (0);
				k++;
			}
			return (haystack + i);
		}
	}
	return (0);
}
