#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads text file and prints it in POSIX format
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *fd;
        ssize_t read_it, written;
        char *buffer;

        if (filename == NULL)
        {
                return (0);
        }

        fd = fopen(filename, "r");
        if (fd == NULL)
        {
                return (0);
        }
        buffer = malloc(sizeof (char) * letters);
        if (buffer == NULL)
        {
                fclose(fd);
                return (0);
        }

        read_it = fread(buffer, sizeof(char), letters, fd);
        if (read_it == -1)
        {
                free(buffer);
                fclose(fd);
                return (0);
        }

        written = write(STDOUT_FILENO, buffer, read_it);
        if (written == -1)
        {
                free(buffer);
                fclose(fd);
                return (0);
        }

        fclose(fd);
        free(buffer);
        return (read_it);
}

