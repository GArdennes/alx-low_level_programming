#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @str: Character to check
 */

void print_rev(char *str)
{
	unsigned long int i;

	for (i = (strlen(str) - 1); i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
