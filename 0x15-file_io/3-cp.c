#include "main.h"

/**
 * main - the main function
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: 0 if success
 */

int main(int ac, char *av[])
{
	int file_from, file_to, check_close;
	ssize_t check_read, check_write;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	check_read = read(file_from, buff, 1024);

	if (file_from == -1 || check_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	check_write = write(file_to, buff, check_read);

	if (file_to == -1 || check_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

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
