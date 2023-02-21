#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Executable printing lowercase alphabets'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10(void);
	putchar('\n');
	return (0);
}

void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
}
