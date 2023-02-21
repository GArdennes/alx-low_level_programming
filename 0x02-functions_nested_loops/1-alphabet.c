#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'Executable printing lowercase alphabets'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
}
