#include "sort.h"

/**
 * shell_sort - sorts an array of integers with Shell sort - Knuth Sequence.
 * @array: array of integer.
 * @size: size of the array.
 */
void shell_sort(int *array, size_t size)
{
	register unsigned int i, j, n = 1;
	register int val;

	if (!array || size < 2)
		return;
	while (n <= size / 3)
		n = n * 3 + 1;
	while (n > 0)
	{
		for (i = n; i < size; i++)
		{
			val = array[i];
			for (j = i; j > n - 1  && val <= array[j - n]; j -= n)
			{
				array[j] = array[j - n];
			}
			array[j] = val;
		}
		n = (n - 1) / 3;
		print_array(array, size);
	}
}
