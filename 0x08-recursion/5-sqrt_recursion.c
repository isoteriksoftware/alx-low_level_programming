#include "main.h"

int get_sqrt(int n, int possible_root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}

/**
 * get_sqrt - tries to get the square root of n by continously
 * comparing the square of 'possible_root' to n
 * @n: the number
 * @possible_root: a possible root of n
 *
 * Return: square root of n, -1 otherwise
 */
int get_sqrt(int n, int possible_root)
{
	int square = possible_root * possible_root;

	if (square == n)
		return (possible_root);
	if (square < n)
		return (get_sqrt(n, ++possible_root));

	return (-1);
}
