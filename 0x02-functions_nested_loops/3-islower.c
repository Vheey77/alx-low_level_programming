#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: single letter input
 * Return: Always (Success)
 */
int _islower(int c)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
	/* Use int c*/
	if (f == c)
	{
	return (1);
	}
	else if (f != c)
	{
	return (0);
	}
	}
	return (0);
}
