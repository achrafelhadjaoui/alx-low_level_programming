#include "main.h"

/**
 * append_text_to_file - a function that appends a text to the end of a file
 * @filename: is the name of the file to creat
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openCheck, dprintfCheck;

	if (filename == NULL)
		return (-1);


	openCheck = open(filename, O_WRONLY | O_APPEND);
	if (openCheck == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	dprintfCheck = dprintf(openCheck, "%s", text_content);
	if (dprintfCheck < 0)
		return (-1);

	close(openCheck);
	return (1);
}
