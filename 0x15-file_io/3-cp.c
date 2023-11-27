#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @fromF: fromF.
 * @toF: toF.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int fromF, int toF, char *argv[])
{
	if (fromF == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (toF == -1)
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
	int fromF, toF, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp fromF toF");
		exit(97);
	}

	fromF = open(argv[1], O_RDONLY);
	toF = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(fromF, toF, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fromF, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(toF, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(fromF);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromF);
		exit(100);
	}

	err_close = close(toF);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromF);
		exit(100);
	}
	return (0);
}
