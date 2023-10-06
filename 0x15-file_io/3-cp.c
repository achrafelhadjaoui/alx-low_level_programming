#include "main.h"

/**
 * check_error - a function that looks for errors and print them into stderr
 * @file_from: the first parameter
 * @file_to: the second parameter
 * @av: the third parameter
 */

void check_error(int file_from, int file_to, char *av)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av);
		exit(99);
	}
}

/**
 * main - the main function
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: 0 if success
 */

int main(int ac, char *av[])
{
	int file_from, file_to;
	ssize_t check_read, check_write;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	check_error(file_from, 0, av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_error(0, file_to, av[2]);

	while ((check_read = read(file_from, buff, 1024)) > 0)
	{
		check_write = write(file_to, buff, check_read);
	}
	check_error(check_read, 0, av[1]);

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
