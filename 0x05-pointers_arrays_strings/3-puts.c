#include "main.h"

/**
 * _puts - function that prints a string
 * @str: Character to check
 */

void _puts(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
