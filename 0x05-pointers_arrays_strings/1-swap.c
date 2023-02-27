#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: Character to check
 * @b: Character to check
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
