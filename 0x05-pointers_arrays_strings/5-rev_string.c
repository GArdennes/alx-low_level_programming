#include "main.h"

/**
 * rev_string - function that prints a strring in reverse
 * @s: Character to check
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = (strlen(s) - 1), j = 0; i > j; i--, j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
