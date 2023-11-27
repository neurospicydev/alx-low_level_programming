#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * to the end of a file
 * @filename: Pointer to a string of the filename
 * @text_content: Pointer to NULL terminated string
 * to append to existing content in the file
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, bytesW = 0, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		bytesW = write(fd, text_content, i);
		if (bytesW < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
