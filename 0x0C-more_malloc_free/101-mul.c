#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 is c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints error followed by a new line to stdout
 *
 */
void print_error(void)
{
	char *error = "Error\n";
	int i;

	for (i = 0; error[i] != '\0'; i++)
	{
		putchar(error[i]);
	}
}

/**
 * multiply - multiplies two numbers and prints the result
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0, product = 0, sum = 0;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = _calloc(len1 + len2, sizeof(int));

	if (result == NULL)
		exit(98);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = product + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	for (; i < len1 + len2; i++)
		putchar(result[i] + '0');

	putchar('\n');

	free(result);
}

/**
 * main - multiplies two positive two positive numbers passed as arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 98 if an error occurred
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int i;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!_isdigit(argv[1][i]))
		{
			print_error();
			exit(98);
		}
	}
	num1 = argv[1];

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!_isdigit(argv[2][i]))
		{
			print_error();
			exit(98);
		}
	}
	num2 = argv[2];
	multiply(num1, num2);

	return (0);
}
