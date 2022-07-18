#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: number of bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
	{
		dest[t] = src[t];
	}
	return (dest);
}
