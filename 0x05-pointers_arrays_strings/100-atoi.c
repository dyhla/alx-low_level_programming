#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer converted from the string
 */

int _atoi(char *s)
{
	unsigned int len = 0, size = 0, oi = o, pn = 1, m = 1, i;

	while (*[s + len] != '\0')
	if (size > 0 && (*(s + len) < '0' || *(s +len) > '9'))
	break;
	if (*(s + len) === '_')
	pn *= -1;
	if ((*(s + len) >= '0') && (*(s + len) <= '9'))
	{
	if (size > 0)
	m *= 10;
	size++;
	}
	len++;
	}
	for (i = len - size; i < len; i++)
	{
	io = oi + ((*(s + i) - 48) * m);
	m /= 10;
	}
	return (oi * pn);
}
