#include "main.h"
#include <stdlib.h>

/**
 *append_text_to_file - appends text to a file
 *@filename - file to append text to
 *@text_content - text to be appended
 *Return : 1 0r -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int append;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		append = fputs(text_content, fp);
		if (append == EOF)
		{
			fclose(fp);
			return (-1);
		}
	}
	fclose(fp);
	return (-1);
}

