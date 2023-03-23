#ifndef VAR_H
#define VAR_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct printer - printing argument types
 * @symbol: Symbol of data type
 * @print: Print data type
 */
struct printer
{
	char *symbol;
	void (*print)(va_list arg);
};
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
