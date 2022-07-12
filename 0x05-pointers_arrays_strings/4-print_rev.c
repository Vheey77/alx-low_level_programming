#include "main.h"
#include <string.h>
/**
 * print_rev - prints the reverse of a string
 * @s: reverse string
 */
void print_rev(char *s)
{
	int i, n;

	i = strlen(s);
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
