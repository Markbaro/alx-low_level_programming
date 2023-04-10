#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks indianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number = 1;
	char *pointer = (char *)&number;

	if (*pointer == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
