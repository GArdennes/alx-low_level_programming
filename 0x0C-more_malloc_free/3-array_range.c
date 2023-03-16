#include "main.h"

/**
 * array_range - function that creates array of integers
 * @min: The number to check
 * @max: The number to check
 *
 * Return: On success ptr,
 * On error, NULL
 */

int *array_range(int min, int max)
{
	int n, i;
	int *arr;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min + i;

	return (arr);
}
