#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: a number to search
 * @index: a index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_values;

	if (index > 63)
		return (-1);

	bit_values = (n >> index) & 1;

	return (bit_values);
}
