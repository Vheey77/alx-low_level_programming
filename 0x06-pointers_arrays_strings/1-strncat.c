#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings and uses at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes in src
 * Return: A pointer to the destination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
	{
		dest[dest_len + t] = src[t];
	}
	dest[dest_len + t] = '\0';

	return (dest);
}
