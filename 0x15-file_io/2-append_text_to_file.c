#include "main.h"

/**
 * _strlen - calculates length of string
 * @c: String to check
 * Return: On success result
 */
size_t _strlen(char *c)
{
	size_t len = 0;

	while (*c != '\0')
	{
		len++;
		c++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text to file
 * @filename: String to check
 * @text_content: String to append
 * Return: On success 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_ptr;
	size_t len;
	ssize_t written;

	if (filename == NULL)
		return (-1);
	file_ptr = open(filename, O_WRONLY | O_APPEND);
	if (file_ptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		written = write(file_ptr, text_content, len);
	}
	if (written == -1)
	{
		close(file_ptr);
		return (-1);
	}
	close(file_ptr);
	return (-1);
}
