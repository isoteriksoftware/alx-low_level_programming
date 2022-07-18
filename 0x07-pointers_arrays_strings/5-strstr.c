#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: source string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *resultInitial;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			resultInitial = &haystack[i];
			for (j = i + 1, k = 1;
					haystack[j] != '\0'
					&& needle[k] != '\0';
					j++, k++)
			{
				if (haystack[j] != needle[k])
					break;
			}

			return (resultInitial);
		}
	}

	return (0);
}
