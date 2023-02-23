#include "main.h"

/**
 * _isdigit - function that checks if character is from 0 to 9
 * @c - Character to check
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
