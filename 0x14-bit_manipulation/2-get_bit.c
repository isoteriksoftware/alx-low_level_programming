#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, len = 0;

	while (len++ < index)
	{
		if (len >= MAX_COUNT)
			return (-1);
		i = i << 1;
	}
	return (n & i ? 1 : 0);
}
