#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_bit - gets value of bit at given index
 * @n: number to search
 * @index: index of bit
 * Return: bit of index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 30)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}

