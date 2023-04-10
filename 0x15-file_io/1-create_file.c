#include "main.h"
#include <string.h>

/**
 * create_file - creates file and adds permisssion
 * @filename : file to be created
 * @text_content : content to be written
 * Return: 1 or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fp, bw, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length] ; length++)
			;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bw = write(fp, text_content, length);

	if (fp == -1 || bw == -1)
	{
		return (-1);
	}
	close(fp);

	return (1);
}
