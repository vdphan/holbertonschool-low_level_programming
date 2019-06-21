#include "sort.h"

/**
 * rds - radix sort.
 * @arr: array of integer.
 * @size: size of the array.
 * @sd: significant digit.
 */
void rds(int *arr, int size, int sd)
{
	int *output = malloc(sizeof(int) * size);
	int i, count[10] = {0};

	for (i = 0; i < size; i++)
		count[(arr[i] / sd) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = size - 1; i >= 0; i--)
	{
		output[count[(arr[i] / sd) % 10] - 1] = arr[i];
		count[(arr[i] / sd) % 10]--;
	}
	for (i = 0; i < size; i++)
		arr[i] = output[i];
	free(output);
}

/**
 * radix_sort - sorts an array of integers in ascending
 * order using the Radix sort algorithm
 * @array: array of integer.
 * @size: size of the array.
 */
void radix_sort(int *array, size_t size)
{
	int sd, max;

	if (!array || size < 2)
		return;
	max = find_max(array, size);
	for (sd = 1; max / sd > 0; sd *= 10)
	{
		rds(array, size, sd);
		print_array(array, size);
	}
}

/**
 * find_max - finds max integer in array of positive integers
 * @array: array of integer.
 * @size: size of the array.
 * Return: max integer
 */
int find_max(int *array, size_t size)
{
	register uint i;
	register int max = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
