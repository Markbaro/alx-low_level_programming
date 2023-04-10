#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it in POSIX format
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return:0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t max_chars)
{
	ssize_t file, reading, writing;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	reading = read(o, buffer, letters);
	writing = write(STDOUT_FILENO, buffer, r);

	if (file == -1 || reading == -1 || writing == -1 || writing != reading)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (writing);
}
