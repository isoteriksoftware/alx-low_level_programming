#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements count
 * @size: size
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	while (i < nmemb * size && ptr)
		((char *)ptr)[i++] = 0;
	return (ptr);
}
