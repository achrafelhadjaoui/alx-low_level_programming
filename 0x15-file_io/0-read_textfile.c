#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * print it to the POSIX standard output.
 * @filename: the first parameter
 * @letters: second parameter (the number of letters should read and print)
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int check;
	ssize_t readCheck, writeCheck;
	char *buf = NULL;

	if (filename == NULL)
		return (0);

	check = open(filename, O_RDONLY);
	if (check == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	readCheck = read(check, buf, letters);
	if (readCheck == -1)
		return (0);

	writeCheck = write(STDOUT_FILENO, buf, readCheck);
	free(buf);
	close(check);
	return (writeCheck);

}
