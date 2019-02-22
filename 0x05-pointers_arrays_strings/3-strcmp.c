#include "holberton.h"
/**
 * _strcmp -  a function that compare the string.
 * @s1 : character value
 * @s2  : character value
 *
 *Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int k;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if ((s1[i] != s2[j]) || (*s1 == *s2))
		{
			k = s1[i] - s2[j];
			break;
		}
	}
	return (k);
}
