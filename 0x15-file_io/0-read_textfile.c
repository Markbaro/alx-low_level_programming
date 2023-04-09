#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it in POSIX format
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return:............
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t readit;
	ssize_t count;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	char *buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	while ((readit = fread(buffer, sizeof(char), letters, file)) > 0)
	{
		readit += count;
		fwrite(buffer, sizeof(char), count, stdout);
	}
	fclose(file);
	free(buffer);
	return (readit);
}
