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
	int fp, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0 ; text_content[len] ; len++);
	}

	fp = creat(filename, 0600);
	if (fp == -1)
		return (-1);

	if (len > 0)
	{
		if (write(fp, text_content, len) != len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);

	return (1);
}
