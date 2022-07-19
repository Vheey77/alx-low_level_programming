#include "main.h"
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: String
 * @accept: Set of bytes
 * Return: A pointer to the byte in s that matches any of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
