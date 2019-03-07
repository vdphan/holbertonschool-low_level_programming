#include "holberton.h"

/**
 * _calloc - allocates memory for an array.
 *@nmemb: array of element.
 *@size: size of bytes.
 *
 * Return:Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(sizeof(char) * nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i]; i++)
		s[i] = 0;
	return (s);
}
