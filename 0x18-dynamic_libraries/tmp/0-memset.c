#include "main.h"

/**
 * _memset - set bytes of a buffer to a constant
 * @s: pointer to the buffer
 * @b: the constant to fill s
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
