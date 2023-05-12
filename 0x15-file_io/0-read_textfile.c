#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the given file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fd);
	return (wr);
}
