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
	int i;
	int sum = 0;
	char *endptr;
	long num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
