#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: Integer
 * @size: Size of matrix
 */
void print_diagsums(int *a, int size)
{
	int t, sum1 = 0, sum2 = 0;

	for (t = 0; t < size; t++)
	{
		sum1 += a[t];
		a += size;
	}
	a -= size;

	for (t = 0; t < size; t++)
	{
		sum2 += a[t];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
