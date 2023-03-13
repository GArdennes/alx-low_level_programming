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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
