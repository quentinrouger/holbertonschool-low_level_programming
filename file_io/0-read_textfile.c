#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters);

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr);
}
