#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the given file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
