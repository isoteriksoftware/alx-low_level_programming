#include "main.h"

/**
 * _strcmp - compares src with dst
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: -ve if dst < src
 * +ve if dst > src
 * 0 if src == dst
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, diff = 0;

	while (diff == 0)
	{
		diff = s1[x] - s2[x];
		if (s1[x] == '\0' || s2[x] == '\0')
			break;
		x++;
	}
	return (diff);
}
