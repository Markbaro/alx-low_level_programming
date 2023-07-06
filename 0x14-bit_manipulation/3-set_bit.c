#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n : number
 * @index : index to be set
 * Return:1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 60)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);

	return (1);
}
