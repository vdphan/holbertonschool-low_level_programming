#include "function_pointers.h"

/**
 * int_index -a function that searches for an integer.
 * @array: pointer to integer array.
 * @size: is the number of elements in the array.
 * @cmp:is a pointer to the function to be used to compare values.
 *
 * Return: returns the index of the first element otherwise return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				break;
		}
		return (i);
	}
	return (0);
}
