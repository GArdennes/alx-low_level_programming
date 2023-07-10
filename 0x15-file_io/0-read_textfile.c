#include "main.h"

/**
 * read_textfile - uses system call open, read, write
 * @filename: String to check
 * @letters: Characters to check
 * Return: Bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_r;
	ssize_t bytes_w;
	ssize_t bytes_o;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytes_o = open(filename, O_RDONLY);
	bytes_r = read(bytes_o, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (bytes_o == -1 || bytes_r == -1 || bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(bytes_o);

	return (bytes_w);
}
