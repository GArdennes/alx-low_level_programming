#include "main.h"

/**
 * argstostr - assigns memory for character
 * @ac: Number to check
 * @av: The arguments to check
 *
 * Return: On success result
 * On error, NULL is returned, and errno is set appropriately.
 */

char *argstostr(int ac, char **av)
{
	int i, j, x;
	int len = ac;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	result = malloc(sizeof(char) * len + 1);

	if (result == NULL)
		return (NULL);

	x = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			result[x++] = av[i][j];

		result[x++] = '\n';
	}
	result[len] = '\0';

	return (result);
}
