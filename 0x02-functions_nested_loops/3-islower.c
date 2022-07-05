#include "main.h"
/**
 * _islower - checks for lowercase
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		/* Use int c*/
		if (c == f)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
