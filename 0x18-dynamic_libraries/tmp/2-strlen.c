#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: pointer to the string
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x++] != '\0')
		continue;
	return (x - 1);
}
