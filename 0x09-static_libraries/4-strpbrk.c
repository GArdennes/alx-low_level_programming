#include "main.h"

/**
 * _strpbrk - function that searches a string for a character
 * @s: String to check
 * @accept: String to check
 *
 * Return: Results
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
