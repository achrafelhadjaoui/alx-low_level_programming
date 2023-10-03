#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the stdout
 * @filename: first parameter
 * @letters: is the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file cannot be oppend or read, return 0
 * if the file name id NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int check_open;
	ssize_t check_read, check_write;
	char *buff;

	if (filename == NULL)
		return (0);

	check_open = open(filename, O_RDONLY);
	if (check_open == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	check_read = read(check_open, buff, letters);
	if (check_read == -1)
	{
		free(buff);
		return (0);
	}

	check_write = write(STDOUT_FILENO, buff, letters);
	if ((size_t)check_write != letters)
	{
		free(buff);
		return (0);
	}

	close(check_open);

	free(buff);

	return (check_read);
}
