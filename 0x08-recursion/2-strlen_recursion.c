#include "main.h"

/**
 * _strlen_recursion - counts the length of string
 * @s: The character to print
 *
 * Return: On success length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
