#include "main.h"

/**
 * append_text_to_file - a function that appends a text at the end of the file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of a file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, dp;

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	else if (text_content == NULL)
		return (1);

	else if (text_content != NULL)
		dp = dprintf(fd, "%s", text_content);

	if (dp < 0)
		return (-1);

	close(fd);

	return (1);
}
