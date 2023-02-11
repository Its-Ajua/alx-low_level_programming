#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: sting to be added at the end of the file
 *
 * Return: 1 0n success and 2 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_file, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(file, text_content, len);

	if (file == -1 || write_file == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
