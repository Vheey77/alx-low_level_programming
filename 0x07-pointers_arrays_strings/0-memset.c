#include "main.h"
#include <stdio.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: Pointer to the unsigned integer
 * @b: Constant byte
 * @n: First bytes of the memory area pointed to
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		s[t] = b;
	}
	return (s);
}
