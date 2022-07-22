#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
