#include "main.h"

/**
 * _strncpy - copies n bytes from src to destination
 * @src: pointer to the source string
 * @dst: pointer to the destination string
 * @n: number of bytes to copy
 * Return: pointer to destination
 */

char *_strncpy(char *dst, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dst[x] = src[x];
		x++;
	}
	while (x < n)
		dst[x++] = '\0';
	return (dst);
}
