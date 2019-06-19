#include "sort.h"
/**
 * heapify - create subtree rooted with each array index.
 * @arr: array of integer.
 * @n: size of the heap.
 * @i: an index in the array.
 * @size: size of the array.
 */
void heapify(int arr[], int n, int i, size_t size)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;
	if (r < n && arr[r] > arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		print_array(arr, size);
		heapify(arr, n, largest, size);
	}
}
/**
 * heap_sort - sorts an array of integers in ascending order
 * using the Heap sort algorithm.
 * @array: array of integer.
 * @size: size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int i = 0;

	if (!array || size < 2)
		return;
	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		if (i)
			print_array(array, size);
		heapify(array, i, 0, size);
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
