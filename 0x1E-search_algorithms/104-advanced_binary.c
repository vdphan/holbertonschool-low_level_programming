#include "search_algos.h"
/**
 * recursive_binary - a recursive function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: is the lowest index in array
 * @high: is the highest index in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	int mid = 0;
	size_t i = 0;

	if (high > low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = (high + low) / 2;
		if (array[mid] > value)
			return (recursive_binary(array, low, mid - 1, value));
		else if (array[mid] < value)
			return (recursive_binary(array, mid + 1, high, value));
		else if (array[mid] == value)
			return (recursive_binary(array, low, mid, value));
	}
	if (array[low] == value)
		return (low);
	printf("Searching in array: %d\n", array[low]);
	return (-1);
} 
/**
 * advanced_binary - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
