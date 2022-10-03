#include "main.h"

/**
 * _memcpy - copies n bytes from one buffer to another
 * @src: pointer to the source buffer
 * @dest: pointer to the destination buffer
 * @n: number of bytes to copy
 * Return: pointer to dst
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
