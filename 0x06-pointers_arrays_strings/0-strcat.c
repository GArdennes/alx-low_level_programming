#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: Character to check
 * @src: Character to check
 * Return: Result
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
	{
		j++;
	}
	while (src[i])
	{
		dest[j++] = src[i];
		i++;
	}

	return (dest);
}
