#include <stdio.h>

/**
 * main - prints number with space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int y;

	for (y = 48; y <= 57; y++)
	{
		putchar(y);
		if (y == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}


