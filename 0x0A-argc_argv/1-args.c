#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: Character to check
 * @argv: Character to print
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
