#include "main.h"

/**
 * main - Entry point for the program
 * test functions if prints positive_or_negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 10;
	positive_or_negative(i);

	i = -5;
	positive_or_negative(i);

	i = 0;
	positive_or_negative(i);

	return (0);
}
