#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flips bits
 * @n:base number
 * @m:new flipped number
 * Return:number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int count;

	flip = n ^ m;
	count = 0;

	while (flip)
	{
		count++;
		flip &= (flip - 1);
	}

	return (count);
}
