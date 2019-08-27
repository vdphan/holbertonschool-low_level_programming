#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	uint  i = 0, start = 0, end = 0, block = 0;

	if (!array)
		return (-1);
	block = sqrt(size);
	end = block;
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	if (array[end] <= value)
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
	while (array[end] < value && end < size)
	{
		start = end;
		end = end + block;
		if (array[end] < value && start != block)
			printf("Value checked array[%d] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end >= size)
		end = size - 1;
	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}