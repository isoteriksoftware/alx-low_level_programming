#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len])
		len++;

	n = (len % 2 == 0 ? len : len - 1) / 2;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
