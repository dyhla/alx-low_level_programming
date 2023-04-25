#include <stdio.h>

/**
 * main - prints 0-9 in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
