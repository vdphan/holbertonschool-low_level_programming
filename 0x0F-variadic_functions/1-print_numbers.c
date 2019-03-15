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
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(ab, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ab, int));
	va_end(ab);
}
