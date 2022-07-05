#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int absoluteN = n < 0 ? n * -1 : n;
	int lastDigit = absoluteN % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
