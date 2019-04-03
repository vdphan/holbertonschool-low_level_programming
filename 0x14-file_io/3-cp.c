#include "holberton.h"
/**
 *main - entry point.
 *@argc: number of argument
 *@argv: character value an array of pointers to the strings.
 *
 *Return: 0 if success.
 */
int main(int argc, char **argv)
{
	char buf[1024];
	int a, file1, file2;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	a = read(file1, buf, 1024);
	while (a > 0)
	{
		if (write(file2, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		a = read(file1, buf, 1024);
	}
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file2))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);
	if (close(file1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);
	return (0);
}
