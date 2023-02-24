#include <stdio.h>

/**
 * main - Evaluate the results for a prime number
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 782849;
	int i, x, check, prime;

	for (i = 2; i <= n; i++)
	{
		check = 1;
		for (x = 2; (x * x) <= i; x++)
		{
			if (i % x == 0)
			{
				check = 0;
				break;
			}
		}
		if (check == 1)
		{
			prime = i;
		}
	}
	printf("%d\n", prime);
	return (0);
}
