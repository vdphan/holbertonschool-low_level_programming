#include "variadic_functions.h"
/**
 * test_char - print char.
 * @pr: argument pointer.
 */
void test_char(va_list pr)
{
	printf("%c", va_arg(pr, int));
}
/**
 * test_integer - print char.
 * @pr: argument pointer.
 */
void test_integer(va_list pr)
{
	printf("%i", va_arg(pr, int));
}
/**
 * test_float - print char.
 * @pr: argument pointer.
 */
void test_float(va_list pr)
{
	printf("%f", va_arg(pr, double));
}
/**
 * test_string - print char.
 * @pr: argument pointer.
 */
void test_string(va_list pr)
{
	char *s = va_arg(pr, char*);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all -  prints anything.
 * @format: format type of arg.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	op_t opsj[] = {
		{"c", test_char},
		{"i", test_integer},
		{"f", test_float},
		{"s", test_string},
		{NULL, NULL}
	};
	va_list pr;
	int i = 0;
	int j = 0;
	char *sep = "";

	va_start(pr, format);
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (format[i] == *ops[j].op)
			{
				printf("%s", sep);
				ops[j].f(pr);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pr);
}
