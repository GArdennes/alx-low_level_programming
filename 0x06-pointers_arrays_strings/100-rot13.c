#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: Result
 */

char *rot13(char *str)
{
	char *s = str;

	while (*s)
	{
		if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
			*s += 13;
		else if ((*s >= 'N' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
			*s -= 13;
		s++;
	}
	return (str);
}
