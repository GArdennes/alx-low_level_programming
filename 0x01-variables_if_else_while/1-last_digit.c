#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Executable for finding last digit of integer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ls = n % 10;
	if (ls < 6 && ls != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls);
	else if (ls > 5)
		printf("Last digit of %d is %d and is less than 5\n", n, ls);
	else if (ls == 0)
		printf("Last digit of %d is %d and is 0\n", n, ls);
	return (0);
}


