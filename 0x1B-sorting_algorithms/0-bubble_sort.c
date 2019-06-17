#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using the Bubble sort algorithm
 * @array: array of integer:
 * @size: size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	register unsigned int i;
	_Bool sorted = true;

	if (!array || size < 2)
		return;

	while (sorted)
	{
		sorted = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				sorted = true;
				print_array(array, size);
			}
		}
	}
}

/**
 *swap -  swap value of 2 array index:
 *@a: value at element a.
 *@b: value at element b.
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
