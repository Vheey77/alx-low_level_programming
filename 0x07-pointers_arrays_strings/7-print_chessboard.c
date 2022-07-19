#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: Chessboard
 */
void print_chessboard(char (*a)[8])
{
	int t, j;

	for (t = 0; a[t][7]; t++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[t][j]);
		}
		_putchar('\n');
	}
}
