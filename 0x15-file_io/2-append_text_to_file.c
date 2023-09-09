#include "main.h"

/**
 * append_text_to_file - text at the end of file
 * @filename: filename.
 * @text_content: content.
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int n;
	int r;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		n = 0;
		while (text_content[n])
			n++;

		r = write(f, text_content, n);

		if (r == -1)
			return (-1);
	}

	close(f);

	return (1);
}