#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: input
 * Description: Function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int length;

	if (n <= 0)
	{
		_putchar('\n');
	}

	if (n > 0)
	{
		for (length = 0; length <= n; length++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
