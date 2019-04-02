#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of the input file.
 * @letters:is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *c = malloc(letters);

	if (!c)
		return (0);
	if (!*filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(c);
		return (0);
	}
	r = read(fd, c, letters);
	if (r == -1)
	{
		free(c);
		return (0);
	}
	c[letters] = '\0';
	w = write(STDOUT_FILENO, c, r);
	if (w == -1)
	{
		free(c);
		return (0);
	}
	return (w);
	close(fd);
}
