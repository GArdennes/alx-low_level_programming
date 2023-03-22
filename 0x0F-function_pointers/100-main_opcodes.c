#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: On success 1,
 * On error (-1)
 */

int main(int argc, char *argv[])
{
	int index, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		prinf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
