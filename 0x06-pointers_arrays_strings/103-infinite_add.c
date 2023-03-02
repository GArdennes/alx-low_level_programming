#include "main.h"

/**
 * infinite_add - Function that adds two integers
 * @n1: Character to check
 * @n2: Character to check
 * @r: Character to check
 * @size_r: Character to check
 *
 * Return: Result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	return (r);
}
