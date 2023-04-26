#include <stdio.h>

/**
 * main -Entry point
 * Description: puts unique combinations of digits
 * Return: always 0
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = x + 1; y <= 8; y++)
		{
			for (z = y + 1; z <= 9; z++)
			{
				if ((x != y) != z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x == 7 && y == 8)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

