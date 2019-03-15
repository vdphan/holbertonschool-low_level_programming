#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int i;
	char *s;

	va_start(ab, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ab, char *);
		if (!s)
			printf("nil");
		if (s)
			printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
