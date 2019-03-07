#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 *@b : unsigned int value.
 *
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
