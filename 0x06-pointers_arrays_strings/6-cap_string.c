#include "main.h"

/**
 * cap_string - function that changes string to upperc
 * @s: Character to check
 *
 * Return: Result
 */

char *cap_string(char *s)
{
	int i, j;
	char p[] = " \t\n,;.?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; p[j] != '\0'; j++)
			if (s[i - 1] == p[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}
