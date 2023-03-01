#include "main.h"

/**
 * _strncat - function concatenates two strings
 * @dest: Character to check
 * @src: Chracter to check
 * @n: Integer to check
 * Return: Result
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
