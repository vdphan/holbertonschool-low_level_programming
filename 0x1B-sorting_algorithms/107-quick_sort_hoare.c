#include "sort.h"

/**
 * quick_sort_hoare - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: array of integer.
 * @size: size of the array.
 */
void quick_sort_hoare(int *array, size_t size)
{
        if (!array || size < 2)
                return;

        qs_hoare(array, 0, size - 1, size);
}


/**
 * partition_hoare - partitions array between low and high index
 * @arr: input array
 * @low: starting index of array
 * @high: end index of array
 * @size: size of array
 * Return: starting index plus one
 */
int partition_hoare(int *arr, int low, int high, size_t size)
{
        int pivot = arr[high];
        int i = low - 1, j = high + 1;

        while (i < j)
        {
                do
                        i++;
                while (arr[i] < pivot);
                do
                        j--;
                while (arr[j] > pivot);
                if (i < j)
                {
                        swap(&arr[i], &arr[j]);
                        print_array(arr, size);
                }
        }
        return (i);
}


/**
 * qs - quick sort with extra parameter size and recursive way.
 * @arr: array of integer.
 * @low: starting index of array
 * @high: end index of array
 * @size: size of array
 */
void qs_hoare(int *arr, int low, int high, size_t size)
{
        int p;

        if (low < high)
        {
                p = partition_hoare(arr, low, high, size);
                qs_hoare(arr, low, p - 1, size);
                qs_hoare(arr, p, high, size);
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
