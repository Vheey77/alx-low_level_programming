#include "main.h"
#include <string.h>
/**
 * *string_toupper - change all lowercase of a string to uppercase
 * @str: Character to be changed
 * Return: New string
 */
char *string_toupper(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		if (str[t] >= 'a' && str[t] <= 'z')
		{
			str[t] = str[t] - 32;
		}
		t++;
	}
	return (str);
}
