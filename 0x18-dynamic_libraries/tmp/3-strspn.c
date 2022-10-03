#include "main.h"
#include<string.h>

/**
 * _strspn - finds number of characters
 * matching in the first part of s that are valid
 * @s: pointer to the string
 * @accept: the string with valid characters
 * Return: number of valid matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]))
			count++;
		else
			break;
	}
	return (count);
}
