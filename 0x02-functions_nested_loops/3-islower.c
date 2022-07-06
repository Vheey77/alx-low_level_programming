#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: single letter input
 * Return: Always 0 (Success)
 */

int _islower(int c);
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
	if (c == f)
	return (1);
	}
	else
	{
	return (0);
	}
}
