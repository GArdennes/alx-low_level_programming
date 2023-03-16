#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: The string to check
 * @s2: The string to check
 * @n: The number to check
 *
 * Return: On success pointer,
 * On error, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		len2 = n;

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	memcpy(ptr, s1, len1);
	memcpy(ptr + len1, s2, len2);
	ptr[len1 + len2] = '\0';

	return (ptr);
}
