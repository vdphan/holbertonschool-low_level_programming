#include "sort.h"

/**
 * partition - sorts an array of integers using the Quick sort
 * @arr: array of integer.
 * @low: lowest value.
 * @high: highest value.
 * @size: size of the array.
 *
 * Return: i + 1.
 */
int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 *qs - recursive function to sort.
 *@arr: array of integer
 *@low: lowest value.
 *@high: highest value.
 *@size: size of the array.
 */
void qs(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, size);

		qs(arr, low, pi - 1, size);
		qs(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers using the Quick sort
 * @array: array of integer.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
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
