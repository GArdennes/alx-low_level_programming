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

	for (i = 0; i < 10; ++i)
	{
		for (a = i + 1; a < 10; ++a)
		{
			putchar('0' + i);
			putchar('0' + a);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
