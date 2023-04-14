#include "main.h"
#include <stdio.h>

/**
 * main - copies contents from one file to another file
 * @argc: the number of arguments
 * @argv: arguments pointer
 * Return: 0 on success,-1 if it fails
 */

int main(int argc, char *argv[])
{
	int to_fd, from_fd, reading;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((reading = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (to_fd == -1 || write(to_fd, buffer, reading) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(from_fd);
			exit(99);
		}

	}
	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	return (0);
}
