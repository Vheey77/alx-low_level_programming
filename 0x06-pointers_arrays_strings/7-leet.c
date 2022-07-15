#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: String to be encoded
 * Return: Leet string
 */
char *leet(char *str)
{
	int t = 0, j;
	int d = 5;

	char actltr[5] = {'A', 'E', 'O', 'T', 'L'};  /* Actual letters */
	char leetltr[5] = {'4', '3', '0', '7', '1'}; /* Leet letters */

	while (str[t])
	{
		j = 0;

		while (j < d)
		{
			if (str[t] == actltr[j] || str[t] - 32 == actltr[j])
			{
				str[t] = leetltr[j];
			}
			j++;
		}
		t++;
	}
	return (str);
}
