#include "search_algos.h"

/**
 * advanced_binary - searches for a value
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: On success index of value else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i;
	int result;

	if (array == NULL || size == 0)
		return (-1);
	mid = size / 2;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size ? "\n" : ", ");
	printf("\n");

	if (array[mid] == value)
		return ((int)mid);
	else if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result != -1)
			return (mid + 1 + result);
		else
			return (-1);
	}
	else
		return (advanced_binary(array, mid, value));
}
