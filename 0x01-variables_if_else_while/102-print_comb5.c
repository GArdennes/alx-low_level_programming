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
	int i;
	int a;

	for (i = 0; i < 100; ++i)
	{
		for (a = i + 1; a < 100; ++a)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			if (i == 98 && a == 99)
			{
				putchar('\n');
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
