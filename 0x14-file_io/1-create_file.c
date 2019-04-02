#include "holberton.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the input file.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, i;

	if (!*filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
