#include "main.h"

/**
 * string_toupper - function that changes string to upperc
 * @str: Character to check
 *
 * Return: Result
 */

char *string_toupper(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
	}
	return (str);
}
