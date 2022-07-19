#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string
 * @s: A pointer to the first occurrence of the character c
 * @c: Character in a string
 * Return: A pointer to the first occurrence to the character c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
