#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array
 * @n: Length of array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
