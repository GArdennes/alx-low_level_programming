#include "main.h"

/**
 * create_file - creates new file in current directory
 * @filename: String to check
 * @text_content: String to check
 * Return: On success 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_ptr;
	ssize_t bytes;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file_ptr = 0; text_content[file_ptr];)
			file_ptr++;
	}

	bytes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_written = write(bytes, text_content, file_ptr);

	if (bytes == -1 || bytes_written == -1)
		return (-1);

	close(bytes);
	return (1);
}
