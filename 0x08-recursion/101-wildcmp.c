#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: String to check
 * @s2: String to check
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '*')
	{
		char *p = s2 + 1;

		while (*p == '*')
		{
			if (wildcmp(s1, p))
				return (1);
			s1++;
		}
		return (0);
	}
	else if (*s1 == '\0' || *s2 != *s1)
		return (0);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
