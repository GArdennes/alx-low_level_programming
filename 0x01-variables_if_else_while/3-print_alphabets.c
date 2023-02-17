#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Executable using putchar function'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	char a;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	for (a = 'A'; a <= 'Z'; ++a)
		putchar(a);
	printf("\n");
	return (0);
}
