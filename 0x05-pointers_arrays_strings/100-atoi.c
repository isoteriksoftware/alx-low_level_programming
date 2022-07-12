#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i, value, sign;
	char c;

	i = 0;
	value = 0;
	sign = -1;
	while (s[i] != '\0')
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		else if (c >= '0' && c <= '9')
		{
			if (value < 0)
				value = value * 10 - (c - '0');
			else
				value = (c - '0') * -1;

			/* Make sure the next char is a number */
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	if (sign < 0)
		value *= -1;

	return (value);
}
