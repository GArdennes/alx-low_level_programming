#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: String to check
 * Return: On success result
 * On error (0)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			num = num * 2 + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (num);
}
