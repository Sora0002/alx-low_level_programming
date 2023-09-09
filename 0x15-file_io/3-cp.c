#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - copies the content of a file to another file
 *
 * @argc: args count
 * @argv: args values
 * Return: 0 on (Success)
 */
int main(int argc, char **argv)
{
int source_fd, destination_fd, bytes_read, bytes_written, close_result_1, close_result_2;
char buffer[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
	exit(97);
}

source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (destination_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(99);
}

while ((bytes_read = read(source_fd, buffer, 1024)) > 0)
{
	bytes_written = write(destination_fd, buffer, bytes_read);
	if (bytes_read != bytes_written)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

if (bytes_read == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

close_result_1 = close(source_fd);
if (close_result_1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", source_fd);
	exit(100);
}

close_result_2 = close(destination_fd);
if (close_result_2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", destination_fd);
	exit(100);
}

return 0;
}