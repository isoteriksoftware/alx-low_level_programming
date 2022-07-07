#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * @size: The size of a square
 */
void print_square(int size)
{
	int x, y;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
