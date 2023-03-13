#include "main.h"

/**
 * main - prints the minimum change for cents
 * @argc: Character to check
 * @argv: Character to print
 *
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	int quarters, dimes, nickels, pennies, total_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = i / 10;
	i = i % 25;
	dimes = i / 10;
	i = i % 10;
	nickels = i / 5;
	i = i % 5;
	pennies = i;

	total_coins = quarters + dimes + nickels + pennies;

	printf("%d\n", total_coins);

	return (0);
}
