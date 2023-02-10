#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file to be read
 * @letters: numbers of letters to be read and printed
 *
 * Return: the number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_fl, write_fl;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_fl = read(file, buffer, letters);
	if (read_fl == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	write_fl = write(STDOUT_FILENO, buffer, read_fl);

	if (write_fl == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	close(file);
	return (read_fl);
}
