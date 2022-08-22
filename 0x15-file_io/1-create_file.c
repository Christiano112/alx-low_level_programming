#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text-content: content writed in the file
 *
 * Return: 1 if successful, else -1
 */

int create_file(const char *filename, char *text_cotent)
{
	int fd;
	int nletters;
	int nwr;

	if (!filename)
		return (-1);

	fd = open(filename, 0_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	nwr = write(fd, text_content, nletters);

	if (nwr == -1)
		return (-1);

	close(fd);

	return (1);
}
