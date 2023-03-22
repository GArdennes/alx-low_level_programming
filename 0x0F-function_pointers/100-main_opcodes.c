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
	char *opcode;

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

	opcode = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		if (index == bytes - 1)
		{
			printf("%02hhx\n",opcode[index]);
			break;
		}
		printf("%02hhx ", opcode[index]);
	}
	
	return (0);
}
