#include <stdio.h>
/**
 * main - Prints the alphabets in lower and uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
	putchar(t);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
	putchar(t);
	}
	putchar('\n');
	return (0);
}
