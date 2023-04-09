#include "main.h"

/**
 * _strlen - finds length of string
 * @c: String to check
 * Return: On success result
 */
size_t _strlen(char *c)
{
	size_t len = 0;

	while (*c++ != '\0')
	{
		len++;
		c++;
	}
	return (len);
}

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

	file_ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_ptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = _strlen(text_content);
		bytes_written = write(file_ptr, text_content, length);
	}
	if (bytes_written == -1)
	{
		close(file_ptr);
		return (-1);
	}
	close(file_ptr);
	return (1);
}
