#include "main.h"

/**
 * _strchar - function that sets memory aside
 * @s: String to check
 * @c: Character to check
 *
 * Return: A pointer to character
 */

char *_strchar(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
