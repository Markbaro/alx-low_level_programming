#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: decimal number
 * @index: index position to be changed
 * Return: 1 if works or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 30 || !n)
	{
		return (-1);
	}

	*n |= (1ul << index);
	return (1);
}

