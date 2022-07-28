#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements count
 * @size: size
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int n, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!n || !size)
		return (NULL);
	ptr = malloc(n * size);
	while (i < n * size && ptr)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
