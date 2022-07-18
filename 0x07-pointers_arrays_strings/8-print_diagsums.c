#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: the array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, row;
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;
	int total = size * size;

	for (i = 0; i < total; i += size)
	{
		row = i / size;
		firstDiagonalSum += a[i + row];
		secondDiagonalSum += a[i + size - row - 1];
	}

	printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
}
