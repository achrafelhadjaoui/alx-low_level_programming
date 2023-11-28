#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: is the namof the file to creat
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int openCheck, dprintfCheck;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	openCheck = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (openCheck == -1)
		return (-1);

	dprintfCheck = dprintf(openCheck, "%s", text_content);
	if (dprintfCheck < 0)
		return (-1);

	close(openCheck);
	return (1);
}
