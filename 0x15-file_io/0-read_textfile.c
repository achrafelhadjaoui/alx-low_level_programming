#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and print it to the
 * to the POSIX standard output.
 * @filename: is the stream that we will read
 * @letters: we use it here like a counter
 *
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes,return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *ptr;
	char c;
	size_t count;

	count = 0;
	ptr = fopen(filename, "r");
	if (ptr == NULL)
		return (0);
	while ((c = fgetc(ptr)) != EOF && count < letters)
	{
		printf("%c", c);
		count++;
	}
	fclose(ptr);
	return (letters - 1);
}
