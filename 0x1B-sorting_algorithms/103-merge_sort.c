#include "sort.h"

/**
 * merge - merge two subarrays of array.
 * @array: array of integer.
 * @inner: subarrays.
 * @start: starting index.
 * @mid: middle index.
 * @end: end index.
 */
void merge(int *array, int *inner, int start, int mid, int end)
{
	int i, j, k = 0;

	printf("Merging...\n[left]: ");
	print_array(array + start, mid - start);

	printf("[right]: ");
	print_array(array + mid, end - mid);

	for (i = start, j = mid; i < mid && j < end; k++)
		if (array[i] < array[j])
			inner[k] = array[i++];
		else
			inner[k] = array[j++];
	while (i < mid)
		inner[k++] = array[i++];
	while (j < end)
		inner[k++] = array[j++];
	for (i = start, k = 0; i < end; i++)
		array[i] = inner[k++];

	printf("[Done]: ");
	print_array(array + start, end - start);
}

/**
 * ms - recursive merge function.
 * @array: array of integer.
 * @inner: subarrays.
 * @start: starting index.
 * @end: end index.
 */
void ms(int *array, int *inner, int start, int end)
{
	int mid;

	if (end - start > 1)
	{
		mid = (end - start) / 2 + start;
		ms(array, inner, start, mid);
		ms(array, inner, mid, end);
		merge(array, inner, start, mid, end);
	}
}

/**
 * merge_sort - sorts an array of integers in ascending order using
 * the Merge sort algorithm
 * @array: array of integer.
 * @size: size of the array.
 */
void merge_sort(int *array, size_t size)
{
	int *inner;

	inner = malloc(sizeof(int) * size);
	ms(array, inner, 0, size);
}
