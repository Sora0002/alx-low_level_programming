#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and print
 * @filename: file to read
 * @letters: number of letters
 *
 * Return: actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t bytesRead, bytesWritten;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	bytesRead = read(fileDescriptor, buffer, letters);
	close(fileDescriptor);

	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesRead != bytesWritten)
		return (0);

	return (bytesWritten);
}
