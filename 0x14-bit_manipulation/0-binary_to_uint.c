#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: string containing binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[j] - '0');
	}

	return (dec_value);
}
