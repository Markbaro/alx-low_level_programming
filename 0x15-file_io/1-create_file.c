#include "main.h"
#include <string.h>

/**
 *create_file - creates file and adds permisssion
 *filename - file to be created
 *text_content - content to be written
 *Return : 1 or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		if ((ssize_t)write(fp, text_content, len) != (ssize_t)len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
