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
	int x;

	for (i = 0;i < 10; ++i)
	{
		for (a = i + 1; a < 10; ++a)
		{
			for (x = a + 1; x < 10; ++x)
			{
				putchar('0' + i);
				putchar('0' + a);
				putchar('0' + x);
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
