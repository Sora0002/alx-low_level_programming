#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @from: from.
 * @tofile: tofile.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int from, int tofile, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (tofile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from, tofile, errc;
	ssize_t nch, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from tofile");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	tofile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, tofile, argv);

	nch = 1024;
	while (nch == 1024)
	{
		nch = read(from, buf, 1024);
		if (nch == -1)
			error_file(-1, 0, argv);
		nwr = write(tofile, buf, nch);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	errc = close(from);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	errc = close(tofile);
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
