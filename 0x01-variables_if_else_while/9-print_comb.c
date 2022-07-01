#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44); /* comma */
			putchar(32); /* space */
		}
		i++;
	}
	putchar('\n');

	return (0);
}
