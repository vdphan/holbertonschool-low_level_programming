#include "sort.h"

/**
 * bubble_sort -
 *
 * Return: 
 */
void bubble_sort(int *array, size_t size)
{
	register unsigned int i;
	_Bool sorted = true;

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


void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
