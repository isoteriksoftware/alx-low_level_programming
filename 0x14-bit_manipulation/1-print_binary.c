#include "main.h"

/**
 * print_binary - prints an int in binary
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		_putchar('0');
		return;
	}
	print_b_helper(n, 1);
}

/**
 * print_b_helper - prints an int in binary
 * @n: number to print
 * @i: number to compare (in powers of 2)
 */
void print_b_helper(unsigned long int n, unsigned long int i)
{
	if (i > n)
		return;
	print_b_helper(n, i << 1);
	_putchar(n & i ? '1' : '0');
}
