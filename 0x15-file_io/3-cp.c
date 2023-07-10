#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point of program
 * @argc: Number of arguments to check
 * @argv: Arguments to check
 * Return: On success 0
 */
int main(int argc, char *argv[])
{
	int file_dtr1, file_dtr2;
	char buffer[1024];
	ssize_t bytes_r, bytes_w;
	mode_t mode = PERMISSIONS;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_dtr1 = open(argv[1], O_RDONLY);
	if (file_dtr1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_dtr2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_dtr2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((bytes_r = read(file_dtr1, buffer, 1024)) > 0)
	{
		bytes_w = write(file_dtr2, buffer, bytes_r);
		if (bytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(file_dtr1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dtr1);
		exit(100);
	}

	if (close(file_dtr2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dtr2);
		exit(100);
	}

	return (0);
}
