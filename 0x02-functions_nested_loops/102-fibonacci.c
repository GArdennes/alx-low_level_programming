#include <stdio.h>

/**
 * main - Lists all the first 50 Fibonacci sequence starting from 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c = 0;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i == 47)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
