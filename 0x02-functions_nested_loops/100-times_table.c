#include "main.h"

void print_int_as_char(int, int);

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to print table for
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			print_int_as_char(k, j);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * print_int_as_char - Prints an integer as a character
 * @k: the integer to print
 * @l: the multiplier
 *
 * Description: This function prints a multiplied intger as character.
 * It requires the muliplier, l, to figure out how many spaces should be
 * printed before the integer
 */
void print_int_as_char(int k, int l)
{
	if (k > 99)
	{
		_putchar(k / 100 + '0');
		_putchar((k / 10 % 10) + '0');
		_putchar(k % 10 + '0');
	}
	else if (k > 9)
	{
		_putchar(' ');
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
	}
	else if (l != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
	}
	else
	{
		_putchar(k + '0');
	}
}
