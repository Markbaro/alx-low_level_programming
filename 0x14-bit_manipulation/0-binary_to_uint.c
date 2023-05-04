#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b : binary
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	int j = 0;

	if (b == NULL)
		return (num);

	while (b[len] != '0')
		len++;
	len -= 1;

	for (j = 0; b[j]; j++)
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (num);
		if (b[j] == '1')
			num += (1 * (1 << len));
		len--;
	}
	return (num);
}
