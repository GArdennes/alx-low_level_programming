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
	size_t length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_ptr == -1)
		return (-1);

	bytes_written = write(file_ptr, text_content, length);
	if (bytes_written == -1)
	{
		return (-1);
	}
	close(file_ptr);
	return (1);
}
