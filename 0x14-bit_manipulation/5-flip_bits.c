#include "main.h"

/**
 * flip_bits - returns no of bits to flip for two numbers to match
 * @n: first number
 * @m: second number
 * Return: number of bits to flip;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp, i = 1, count = 0;
	
	/* find the different bits */
	tmp = n ^ m;
	/* count ones in tmp */
	while (tmp >= i)
	{
		if (i & tmp)
			count++;
		i = i << 1;
	}
	return (count);
}
