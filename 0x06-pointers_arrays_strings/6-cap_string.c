#include "main.h"
#include <string.h>
/**
 * *cap_string - capitalizes all words of a string
 * @str: String to be capitalized
 * Return: Return str
 */
char *cap_string(char *str)
{
	char sep[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int j = 0, t;

	while (str[j])
	{
		t = 0;
		while (t < len)
		{
			if ((j == 0 || str[j - 1] == sep[t]) && (str[j] >= 97 && str[j] <= 122))
			{
				str[j] = str[j] - 32;
			}
			t++;
		}
		j++;
	}
	return (str);
}
