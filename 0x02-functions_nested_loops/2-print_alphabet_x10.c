#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)

{
	int t, i;

	for (i = 0; i < 10; i++)
	{
		for (t = 'a'; t <= 'z'; t++)
		{
			_putchar(t);
		}
		_putchar('\n');
	}
}

