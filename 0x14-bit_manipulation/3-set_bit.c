#include "main.h"

/**
 * set_bit - set the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, len = 0;

	if (!n)
		return (-1);
	while (len++ < index)
	{
		if (len >= MAX_COUNT)
			return (-1);
		i = i << 1;
	}
	*n |= i;
	return (1);
}
