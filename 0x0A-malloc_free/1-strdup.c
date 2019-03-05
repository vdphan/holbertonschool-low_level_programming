#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - create an array with special charcter.
 * @str: chacter value.
 *
 * Return: .
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
		;
	i = i + 1;
	s = malloc(sizeof(char) * i);
	if (s != NULL)
	{
		for (i = 0; str[i] != 0; i++)
			s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
