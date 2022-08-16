#include "main.h"

/**
 * clear_bit - clear the bit at a given index
 * @n: number to check
 * @index: index to clear
 * Return: bit value or -1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, len = 0;
	
	if (!n)
		return (-1);
	while (len++ < index)
		i = i << 1;
	if (*n & i)
		*n ^= i;
	return (1);
}
