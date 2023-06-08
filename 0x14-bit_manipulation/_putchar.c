#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing the character c to stdout
 * @c: The character to be print
 * Return: Success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
