#include "main.h"

/**
 * _atoi - function that prints integers from string
 * @s: Character to check
 *
 * Return: integer success
 */

int _atoi(char *s)
{
	unsigned int i;
	int j, check;
	int sign = 1;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == 45)
			sign *= -1;
		while (s[i] >= '0' && s[i] <= '9')
		{
			check = 1;

			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (check  == 1)
			break;
	}
	j *= sign;

	return (j);
}
