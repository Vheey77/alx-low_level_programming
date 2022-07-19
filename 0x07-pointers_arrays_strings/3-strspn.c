#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: String to be searched
 * @accept: Bytes to be searched for
 * Return: Number of bytes in the initial segment of s
 * which consists of bytes from only accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int t;
	unsigned int bytes = 0;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				bytes++;
				break;
			}
			else if (accept[t + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
