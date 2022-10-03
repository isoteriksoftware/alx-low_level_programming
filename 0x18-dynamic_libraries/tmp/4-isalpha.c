#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to check
 * Return: 1 if its an alphabet 0 otherwise;
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 122) ||
		(c > 64 && c <= 'Z'))
		return (1);
	else
		return (0);
}
