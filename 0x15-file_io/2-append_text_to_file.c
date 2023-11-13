#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @fname: filename.
 * @txt: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *fname, char *txt)
{
	int fd;
	int letters;
	int rwr;

	if (!fname)
		return (-1);

	fd = open(fname, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (txt)
	{
		for (letters = 0; txt[letters]; letters++)
			;

		rwr = write(fd, txt, letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
