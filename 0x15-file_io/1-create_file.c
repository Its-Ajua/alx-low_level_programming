#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: string
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	return (i + _strlen(s + 1));
}

/**
 * create_file - creates files
 * @filename: Name of file to be created
 * @text_content: content of the file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int new_file;
	ssize_t write_file;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}

	write_file = write(new_file, text_content, _strlen(text_content));

	if (write_file == -1 || write_file != _strlen(text_content))
	{
		close(new_file);
		return (-1);
	}

	close(new_file);
	return (1);
}
