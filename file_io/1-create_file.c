#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		wr = write(file, text_content, i);
		if (wr != i)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
