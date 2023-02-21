#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Executable printing putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < (int)(sizeof(c) - 1); i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
