#include "main.h"

/**
 * read_textfile - uses system call open, read, write
 * @filename: String to check
 * @letter: Characters to check
 * Return: Bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffe;

	if (filename == NULL)
		return (0);

	buffe = malloc(sizeof(char) * letters);
	if (buffe == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffe, letters);
	w = write(STDOUT_FILENO, buffe, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffe);
		return (0);
	}

	free(buffe);
	close(o);

	return (w);
}
