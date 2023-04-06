#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: the binary number
  * Return: the unsigned int
  */

unsigned int binary_to_uint(const char *b) 
{
	int i = 0;
	unsigned int x = 0;
	
	if (b == NULL) 
	{
		return (0);
	}
	
	for (i = 0; b[i] != '\0'; i++) 
	{
		if (b[i] != '0' && b[i] != '1') 
		{
			return (0);
		}
		x = x * 2;
		if (b[i] == '1') 
		{
			x = x + 1;
		}
	}
	return (x);
}
