#include "main.h"

/**
 * _strstr - function that searches a string for character
 * @haystack: String to check
 * @needle: String to check
 *
 * Return: Result
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);

	while (*haystack)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
