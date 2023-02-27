#include "main.h"

/**
 * _strcpy - function that copies one string into another
 * @dest: Character to check
 * @src: Character to check
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';	
	return (dest);
}
