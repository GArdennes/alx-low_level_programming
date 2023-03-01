#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: Character to check
 * @s2: Character to check
 *
 * Return: Result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
