#include "main.h"

/**
 * print_binary - print the binary equivalent of a decimal number
 * @n: a number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j, count = 0;
	unsigned long int cur;

	for (j = 63; j >= 0; j--)
	{
		cur = n >> j;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
