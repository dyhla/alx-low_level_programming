#include <stdio.h>

/**
 * myFunction - Prints unique combinations of digits 
 * Description: puts unique combinations of digits
 * This function prints all unique combinations of digits from unique, in the group of three, separated by commas and spacs. Each group of digit is printed only once
 */

void  myFunction(void)
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

int main(void)
{
	myFunction();
	putchar('\n');
	return (0);
}
