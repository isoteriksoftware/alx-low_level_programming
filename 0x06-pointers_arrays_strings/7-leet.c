#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: The string
 *
 * Return: The string
 */
char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (s[i] == subs[j])
				s[i] = le[j / 2];
	}

	return (s);
}
