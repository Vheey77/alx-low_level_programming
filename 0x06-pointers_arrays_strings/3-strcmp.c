#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Return 0 if the two strings are the same, if not return a non-zero
 * value
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
