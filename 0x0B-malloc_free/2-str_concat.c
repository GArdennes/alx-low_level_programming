#include "main.h"

/**
 * str_concat -adds two strings
 * @s1: The string to check
 * @s2: The string to check
 *
 * Return: On success result.
 * On error, NULL is returned, and errno is set appropriately
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);

	return (result);
}
