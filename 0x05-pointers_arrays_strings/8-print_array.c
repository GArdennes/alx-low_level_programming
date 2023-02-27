#include "main.h"

/**
 * print_array - function that prints elements of an array
 * @a: Character to check
 * @n: Character to check
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
