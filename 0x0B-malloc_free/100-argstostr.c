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
	int i, j;
	int len;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	result = malloc(ac + len + 1);

	if (result == NULL)
		return (NULL);

	j = 0;

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]) + 1;
		memcpy(result + j, av[i], len);
		j += len;

		if (i < ac - 1)
		{
			result[j] = '\n';
			j++;
		}
	}

	return (result);
}
