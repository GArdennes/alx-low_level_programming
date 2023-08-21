#include "main.h"

/**
 * _isalpha - Function checking if a variable is an alphabet
 * @c: The character to check
 *
 * Return: On success 1.
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	if (islower(c) == 0 && isalpha(c) == 0)
		return (0);
	else
		return (1);
}
