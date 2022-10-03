#include "main.h"
#include<string.h>
#include<stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 *  of any of the bytes in the string accept
 * @s: pointer to the string
 * @accept: the string with valid characters
 * Return: pointer to the matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *found = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]))
		{
			found = &s[i];
			break;
		}
	}
	return (found);
}
