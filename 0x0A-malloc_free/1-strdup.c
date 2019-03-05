#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - create an array with special charcter.
 * @str: chacter value.
 *
 * Return: .
 */
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * strlen(str));
	strcpy(s, str);
	return (s);
}
