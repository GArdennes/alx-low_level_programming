#include "variadic_functions.h"

/**
 * print_numbers - Function that prints indeterminate list of numbers
 * @separator: Character to check
 * @n: Number to check
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
