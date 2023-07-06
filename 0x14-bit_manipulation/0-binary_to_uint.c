#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b : binary
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, x = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (len--; len >= 0; len--)
	{
		if (b[len] == '1')
			num += x;
		else if (b[len] != '0')
			return (0);
		x *= 2;
	}
	return (num);
}
