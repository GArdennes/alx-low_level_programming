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
	int a;
	
	while (*s != '\0')
	{
		a = *s++;
		if (a == c)
			return (s - 1);
		if (a == 0)
			return (NULL);
		s++;
	}
	return (NULL);
}
