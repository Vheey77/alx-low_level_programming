#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Integer one
 * @b: Integer two
 *
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
