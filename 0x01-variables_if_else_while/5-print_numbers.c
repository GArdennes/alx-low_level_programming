#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Executable using printf function'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	printf("\n");
	return (0);
}
