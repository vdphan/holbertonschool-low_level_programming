#include "holberton.h"
/**
 * reverse_array - a function that compare the string.
 * @a: array integer value
 * @n: integer value
 */
void reverse_array(int *a, int n)
{
	int b = 0, c = 0;
	int temp;

	c = n - 1;
	while (b < c)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
		b++;
		c--;
	}

}
