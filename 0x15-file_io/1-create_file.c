#include "main.h"

/**
 * create_file - creates a file
 * @filename: the given file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd, wr;

	if (!filename)
		return (-1);
	if (text_content)
		for (len = 0; text_content[len];)
			len++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
