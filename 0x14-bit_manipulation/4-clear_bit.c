#include "main.h"

/**
 *clear_bit -  sets the value of a bit to 0 at a given index.
 *@n -value to change
 *@index - position to change
 *Return : 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	x = ~ (1UL << index);
	*n &= x;
	else
		return (1);
}
