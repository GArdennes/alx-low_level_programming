#include "main.h"

/**
 * read_textfile - uses system call open, read, write
 * @filename: String to check
 * @letters: Characters to check
 * Return: Bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_ptr;
	char *buffer;
	ssize_t bytes_r, bytes_w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_ptr = open(filename, O_RDONLY);
	if (file_ptr == -1)
		return (0);

	bytes_r = read(file_ptr, buffer, letters);
	if (bytes_r == -1)
	{
		close(file_ptr);
		return (0);
	}

	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		close(file_ptr);
		return (0);
	}
	if (close(file_ptr) == -1)
		return (0);

	return (bytes_r);
}
