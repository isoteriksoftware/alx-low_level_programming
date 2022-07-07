#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Length of the line
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	c = 0;
	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}

	if (c < 1)
		_putchar('\n');
}
