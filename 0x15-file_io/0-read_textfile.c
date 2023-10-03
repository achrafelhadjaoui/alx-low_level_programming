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
	int check = 0;
	ssize_t check_read;
	size_t i = 0;
	char buf[100];

	if (filename == NULL)
		return (0);

	check = open(filename, O_RDONLY);
	if (check == -1)
		return (0);

	check_read = read(check, buf, letters);
	if (check_read == -1)
	{
		close(check);
		return (0);
	}

	while (i < letters)
	{
		write(1, &buf[i], 1);
		i++;
	}

	close(check);

	return (check_read);
}
