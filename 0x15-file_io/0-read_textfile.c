#include "main.h"

/**
 * read_textfile - A function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: Pointer to a string of the filename
 * @letters: Number of letters to read & print
 *
 * Return: The number of letters it could read or print,
 * 0 if the file cannot be opened, read or NULL.
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytesW;
	ssize_t bytesRead;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	bytesRead = read(fp, buffer, letters);
	bytesW = write(STDOUT_FILENO, buffer, bytesRead);

	close(fp);
	free(buffer);
	return (bytesW);
}
