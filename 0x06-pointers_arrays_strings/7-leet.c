#include "main.h"

/**
 * leet - Changing string to leet format
 * @str: Character to be checked
 *
 * Return: Results
 */

char *leet(char *str)
{
	int i, j;
	char sub[] = "aAeEoOtTlL";
	char leet[] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sub[j] != '\0'; j++)
			if (str[i] == sub[j])
				str[i] = leet[j / 2];
	}
	return (str);
}
