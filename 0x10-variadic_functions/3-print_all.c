#include "variadic_functions.h"

/**
 * print_char - print a char
 * @arg: A list of argument
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - print an int
 * @arg: a list of arguments
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: a list of arguments
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - print a string
 * @arg: a list of arguments
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print-all - prints anything
 * @format: a string of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	struct printer prints[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(prints[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			prints[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
