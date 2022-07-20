#include "main.h"

int check_prime(int factor, int possible_prime);

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the integer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check_prime(2, n));
}

/**
 * check_prime - checks if 'possible_prime' is a prime
 * number using 'factor'
 * @factor: factor to check
 * @possible_prime: a possible prime number
 *
 * Return: 1 if 'possible_prime' is a prime number,
 * otherwise 0
 */
int check_prime(int factor, int possible_prime)
{
	if (possible_prime < 2
			|| possible_prime % factor == 0)
		return (0);
	if (factor > possible_prime / 2)
		return (1);

	return (check_prime(factor + 1, possible_prime));
}
