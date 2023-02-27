#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: Character to check
 */

void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
