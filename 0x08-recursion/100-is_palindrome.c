#include "main.h"

/**
 * is_palindrome_helper - checks to see if string is palindrome
 * @s: Character to check
 * @start: number to check
 * @end: number to check
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks to see if string is palindrome
 * @s: String to check
 *
 * Return: 1 if prime, else 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
