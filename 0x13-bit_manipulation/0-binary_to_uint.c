#include "holberton.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int sum = 0;
	unsigned int a = 1;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
			sum = sum + a;
		a = a * 2;
	}
	return (sum);
}
