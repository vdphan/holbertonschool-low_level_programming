#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum number.
 * @max: maximum number.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *s;
	int i, k;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	s = malloc(sizeof(int) * k);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
