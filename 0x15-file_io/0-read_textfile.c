#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it in POSIX format
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return:............
 */

ssize_t read_textfile(const char *filename, size_t max_chars)
{
	ssize_t fd, read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * max_chars);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	read_count = read(fd, buffer, max_chars);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (fd == -1 || read_count == -1 || write_count == -1 || write_count != read_count)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_count);
}
