#include "holberton.h"

/**
 * _realloc -  reallocates a memory block using malloc and free.
 *@old_size: is the size, in bytes, of the allocated space for ptr.
 *@new_size: is the new size, in bytes of the new memory block.
 *@ptr:  a pointer to the memory previously.
 *
 *Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *s;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (!ptr)
		return (s);
	if (!s)
		return (NULL);
	for (a = 0; a < old_size; a++)
		s[a] = ((char *)ptr)[a];
	free(ptr);
	return (s);
}
