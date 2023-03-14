#include "main.h"

/**
 * _strdup - creates a copy of string
 * @str: The string to check
 *
 * Return: On success result.
 * On error, NULL is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i;
	char temp;

	if (str == NULL)
		return (NULL);

	arr = malloc((strlen(str) + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		temp = str[i];
		arr[i] = temp;
	}
	arr[i] = '\0';
	return (arr);
}
