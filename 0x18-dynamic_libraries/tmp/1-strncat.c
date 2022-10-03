#include "main.h"

/**
 * _strncat - concatenates src to destination
 * taking at most n characters
 * @src: pointer to the source string
 * @dst: pointer to the destination string
 * @n: number of bytes to copy
 * Return: pointer to destination
 */

char *_strncat(char *dst, char *src, int n)
{
	int x = 0, y = 0;

	/* Get the length of destination */
	while (dst[y++] != '\0')
		continue;
	y--;
	/* concatenate */
	while (src[x] != '\0' && x < n)
	{
		dst[y++] = src[x];
		x++;
	}
	dst[y] = '\0';
	return (dst);
}
