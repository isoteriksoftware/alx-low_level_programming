#include "main.h"

/**
 * _isupper - checks if a character is an upper case letter
 * @c: the character to check
 * Return: 1 if is lower 0 otherwise;
 */

int _isupper(int c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	else
		return (1);
}
