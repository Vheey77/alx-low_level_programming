#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int t, tmpf;

	for (t = 0; t < n / 2; t++)
	{
		tmpf = a[t];
		a[t] = a[n - t - 1];
		a[n - t - 1] = tmpf;
	}
}
