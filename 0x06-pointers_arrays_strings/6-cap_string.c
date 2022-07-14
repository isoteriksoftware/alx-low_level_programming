#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string
 *
 * Return: The string
 */
char *cap_string(char *str)
{
	int i, j;
	int hasWord;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, hasWord = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			hasWord = 1;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				hasWord = 1;
		}

		if (hasWord)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
				hasWord = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				hasWord = 0;
			else if (str[i] >= '0' && str[i] <= '9')
				hasWord = 0;
		}
	}

	return (str);
}
