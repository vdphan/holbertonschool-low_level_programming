#include "sort.h"

/**
 * counting_sort - function that sorts an array of integers
 * in ascending order using the Counting sort algorithm.
 * @array: array of integer.
 * @size: size of integer.
 */
void counting_sort(int *array, size_t size)
{
	register unsigned int idx, i, c, len;
	register int j = 0, max = 0;
	int *count;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	len = max + 1;
	count = malloc(sizeof(int) * len);
	for (i = 0; i < size; i++)
	{
		idx = array[i];
		count[idx] += 1;
	}
	for (i = 0; i < len; i++)
	{
		c = (i == 0) ? 0 : count[i - 1];
		count[i] += c;
		printf("%i", count[i]);
		printf((i != len - 1) ? ", " : "\n");
		while (count[i] != j)
		{
			array[j] = i;
			j++;
		}
	}
	free(count);
}
