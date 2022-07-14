#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes in the src string
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	for ( ; t < n; t++)
	{
		dest[t] = '\0';
	}

	return (dest);
}
