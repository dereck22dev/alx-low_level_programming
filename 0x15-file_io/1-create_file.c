#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *content)
{
	int fd;
	int letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!content)
		content = "";

	for (letters = 0; content[letters]; letters++)
		;

	rwr = write(fd, content, letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
