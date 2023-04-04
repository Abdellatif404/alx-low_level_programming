#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of matrix a.
 *
 * @a: the matrix of integers
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = i = 0;
	while (i < size * size)
	{
		sum1 += *(a + i);
		i += size + 1;
	}
	i = size - 1;
	while (i < size * size - 1)
	{
		sum2 += *(a + i);
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
