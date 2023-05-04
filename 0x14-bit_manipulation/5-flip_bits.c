#include "main.h"

/**
 * flip_bits - flip one number to onother
 * @n : number 1
 * @m : number 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	for (; flip != 0; count++)
	{
		(flip &= flip - 1);
	}
	return (count);
}
