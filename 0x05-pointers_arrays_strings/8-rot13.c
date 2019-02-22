#include "holberton.h"
/**
 * rot13 - convert to Rot13.
 *@s: string character value..
 *
 * Return: string value.
 */
char *rot13(char *s)
{
	char input[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char output[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == s[i])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	return (s);
}
