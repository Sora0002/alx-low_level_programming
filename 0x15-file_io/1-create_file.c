#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int r;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(f, text_content, n);

	if (r == -1)
		return (-1);

	close(f);

	return (1);
}