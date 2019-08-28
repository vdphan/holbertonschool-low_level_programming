#include "search_algos.h"
/**
 * printer - Prints an array
 * @array: Target array
 * @low: Left index of @array
 * @high: Right index of @array
 * @value: the value to search for
 */
void printer(int *array, size_t low, size_t high, int value)
{
	size_t i;

	if (low != high || array[low] != value)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i == high)
				printf("\n");
			else
				printf(", ");
		}
	}
}
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

	printer(array, low, high, value);
	mid = (high + low) / 2;
	if (high > low)
	{
		if (array[mid] > value)
			return (recursive_binary(array, low, mid - 1, value));
		else if (array[mid] < value)
			return (recursive_binary(array, mid + 1, high, value));
		else if (array[mid] == value)
			return (recursive_binary(array, low, mid, value));
	}
	if (array[low] == value)
		return (low);
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
