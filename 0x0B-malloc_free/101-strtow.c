#include "main.h"
#include <stdlib.h>

void util(char **words, char *str);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, len = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	i = 0;
	while (str[i])
	{
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
			len++;
		i++;
	}

	words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
}

/**
 * util - a util function for fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void util(char **words, char *str)
{
	int i, j, k, l, start, end, flag;

	i = k = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}	

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			end = i;
			j = end - start;
			words[k] = (char *)malloc(sizeof(char) * (j + 1));

			for (l = 0; start < end; start++, l++)
				words[k][l] = str[start];
			words[k][l] = '\0';
			k++;
			flag = 0;
		}
		
		i++;
	}
}
