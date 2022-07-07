#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
		return;
	}

	if (n > 9)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
