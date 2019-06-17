#include "sort.h"

/**
 * selection_sort - sortng using selection method.
 * @array: array of integer.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	register unsigned int i, j, min;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}

/**
 *swap - swap value between 2 array index.
 *@a: array index a.
 *@b: array index b.
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
