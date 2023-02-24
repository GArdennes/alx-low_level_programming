#include <stdio.h>

/**
 * main - Evaluate the results for a prime number
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int n = 61285245143;
	unsigned long int i;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
