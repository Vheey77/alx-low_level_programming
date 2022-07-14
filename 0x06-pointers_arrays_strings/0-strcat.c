#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: String one to be concatenated
 * @src: String two to be concatenated
 * Return: Resulting string dest
 */
char *_strcat(char *dest, char *src)
{	
	int dlen = 0, i;

	while dest[dlen]
	{
		dlen++;
	}
	for (i = o; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0'; 
	return (dest);
}
