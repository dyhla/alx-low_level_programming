#include "main.h"

/**
 * flip_bits - count all the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int cur;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		cur = exclusive >> j;
		if (cur & 1)
			count++;
	}

	return (count);
}
