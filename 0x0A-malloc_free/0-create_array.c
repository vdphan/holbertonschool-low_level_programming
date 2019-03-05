#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array with special charcter.
 * @size: the size of the array.
 * @c: chacter value.
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str != NULL)
	{
		for (i = 0; i < size; i++)
			str[i] = c;
	}
	return (str);
}
