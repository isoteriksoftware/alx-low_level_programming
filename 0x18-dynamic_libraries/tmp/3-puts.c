#include "main.h"

/**
 * _puts - prints a given string
 * @s: pointer to the string
 */

void _puts(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		_putchar(s[x++]);
	_putchar('\n');
}
