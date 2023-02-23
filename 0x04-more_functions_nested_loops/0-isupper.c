#include "main.h"

/**
 * _isupper - function that checks if character is uppercase
 * @c - Character to check
 *
 * Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
