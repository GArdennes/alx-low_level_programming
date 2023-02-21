#include "main.h"

/**
 * print_last_digit - Function returing last digit of integer
 * @n: The character to print
 *
 * Return: On success last digit of n.
 */

int print_last_digit(int n)
{
	int lstdgt;

	lstdgt = n % 10;

	if (lstdgt < 0)
		lstdgt *= -1;

	_putchar(lstdgt + '0');

	return (lstdgt);
}
