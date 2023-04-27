#include <stdio.h>

/**
 * main - prints the  alphabets in lower case and then upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while (x <= 122)
	{
		putchar(x);
		x++;
	}

	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
