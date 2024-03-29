#include "variadic_functions.h"

/**
 * sum_them_all - function to sum indeterminate number of arg
 * @n: Number to check
 *
 * Return: On success result
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;
	va_list args;

	if (n <= 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		result += va_arg(args, unsigned int);
	va_end(args);

	return (result);
}
