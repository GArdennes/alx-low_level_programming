#include "main.h"

/**
 * puts_half - function that prints half a string
 * @str: Character to check
 */

void puts_half(char *str)
{
	unsigned long int i;
	int ehalf;
	int ohalf;

	ehalf = strlen(str) / 2;
	ohalf = (strlen(str) + 1) / 2;

	if (strlen(str) % 2 == 0)
	{
		for (i = ehalf; i < strlen(str); i++)
			_putchar(str[i]);
	} else
	{
		for (i = ohalf; i < strlen(str); i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
