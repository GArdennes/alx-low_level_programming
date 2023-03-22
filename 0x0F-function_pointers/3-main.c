#include "3-calc.h"

/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	oper = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (strcmp(oper, "/") == 0 || strcmp(oper, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(oper))(num1, num2);

	printf("%d\n", result);
	return (0);
}
