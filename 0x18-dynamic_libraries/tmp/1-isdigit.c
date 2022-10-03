#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if is lower 0 otherwise;
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}
