#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b : binary
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num <<= 1;
		if (*b == '1')
		{
			num += 1;

		b++;
		}
	}
	return (num);
}
