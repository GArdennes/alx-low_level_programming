#include "main.h"

/**
 * _atoi - function that prints integers from string
 * @s: Character to check
 *
 * Return: integer success
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int is = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			is = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (is == 1)
			break;
		c++;
	}
	ni *= min;
	return (ni);
}
