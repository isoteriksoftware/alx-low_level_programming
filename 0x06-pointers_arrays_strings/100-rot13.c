#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: The string
 *
 * Return: The string
 */
char *rot13(char *s)
{
	int i;
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i] - 'A' > 25)
				s[i] = lower[s[i] - 'a'];
			else
				s[i] = upper[s[i] - 'A'];

			break;
		}
	}

	return (s);
}
