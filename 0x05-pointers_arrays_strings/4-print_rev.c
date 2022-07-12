#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: The string
 */
void print_rev(char *s)
{
	/* Figure out the length first */
	int len = 0;

	while (s[len])
		len++;

	/* Print backwards */
	while (--len >= 0)
		_putchar(s[len]);
	_putchar('\n');
}
