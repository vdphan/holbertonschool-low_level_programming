#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: character value.
 * @n: the number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int i;

	va_start(ab, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ab, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
