#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: the binary number
  * Return: the unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			x = x << i;
		}
		else if (b[i] == '1')
		{
			x = (x << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (x);
}
