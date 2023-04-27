#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *  main - entry point
 *  Description: prints combination of numbers
 *  Return: always 0
 */

int main(void)
{
	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= 9; q++)
			{
				printf("%d%d%d\n", d, p, q);
			}
			{
				if ((p != d) !=q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
					putchar(d % 10 + '0');
					if (d == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
