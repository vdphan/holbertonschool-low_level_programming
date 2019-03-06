#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: character value.
 *
 *Return: i value
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
/**
 * argstostr - concatenates all the argument.
 * @ac: integer value.
 * @av: character value.
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int j, b;
	int size = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
		size += _strlen(av[j]);
	size = size + ac - 1;
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	if (s != NULL)
	{
		for (j = 0; j < ac; j++)
		{
			for (b = 0; av[j][b]; b++, k++)
			{
				s[k] = av[j][b];
			}
			s[k++] = '\n';
		}
	}
	s[k] = '\0';
	return (s);
}
