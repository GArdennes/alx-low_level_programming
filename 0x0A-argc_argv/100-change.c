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
	int x, t, total_coins;
	int i = atoi(argv[1]);
	int s[5] = {25, 10, 5, 2, 1};

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

	for (x = 0; x < 5; x++)
	{
		t = i / (s[x]);
		i -= t * s[x];
		total_coins += t;
		if (i == 0)
			break;
	}

	printf("%d\n", total_coins);

	return (0);
}
