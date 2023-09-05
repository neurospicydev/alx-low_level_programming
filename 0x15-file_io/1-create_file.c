#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: Pointer to a string of the filename
 * @text_content: Pointer to NULL terminated string
 * to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, w_text = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = ""; /* create an empty file */

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);

	while (text_content[i])
		i++;

	w_text = write(fd, text_content, i);
	if (w_text < 0)
		return (-1);

	close(fd);
	return (1);
}
