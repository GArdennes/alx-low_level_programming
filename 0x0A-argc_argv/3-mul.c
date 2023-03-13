#include "main.h"

/**
 * main - prints the name of the executable file
 * @argc: Character to check
 * @argv: Character to print
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (i * j));
	return (0);
}
