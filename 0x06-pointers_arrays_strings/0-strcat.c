#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: Character to check
 * @src: Character to check
 * Return: Result
 */

char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src) + 1);

	strcpy(result, dest);
	strcat(result, src);

	return (result);
}
