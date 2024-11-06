#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array to be printed
 * Description: function that prints the chessboard.
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			_putchar(a[i][i]);
		}
		_putchar('\n');
	}
}
