#include "main.h"

/**
 * read_textfile - a function that reads a text file and print it
 * @filename: first parameter
 * @letters: is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	int c;
	size_t i;
	(void)letters;

	i = 0;
	ptr = fopen(filename, "r");
	if (filename == NULL || ptr == NULL)
		return (0);

	while (i < letters && (c = fgetc(ptr)) != EOF)
	{
		write(STDOUT_FILENO, &c, 1);
		i++;
	}

	fclose(ptr);
	return (i);
}
