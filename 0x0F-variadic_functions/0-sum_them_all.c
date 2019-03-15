#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its parameters.
 * @n: unsigned int parameter.
 *
 * Return: sum of numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list anum;
	int sum = 0;
	unsigned int i;

	if (!n)
		return (0);
	va_start(anum, n);
	for (i = 0; i < n; i++)
		sum += va_arg(anum, int);
	va_end(anum);
	return (sum);
}
