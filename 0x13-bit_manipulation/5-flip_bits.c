#include "holberton.h"

/**
 * flip_bits - the number of bits you would need to flip.
 * @n: first number value.
 * @m: second number value.
 *
 * Return: number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i = 0;

	while (i < 64)
	{
		if (((n & 1) ^ (m & 1)) == 1)
			count++;
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (count);
}
