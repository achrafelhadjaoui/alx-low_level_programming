#include "main.h"

/**
 * create_file - a function that creats a file
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * The created file must have those permissions: rw-------. If the file already
 * exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, dp;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	dp = dprintf(fd, "%s", text_content);
	if (dp < 0)
		return (-1);

	close(fd);
	return (1);
}
