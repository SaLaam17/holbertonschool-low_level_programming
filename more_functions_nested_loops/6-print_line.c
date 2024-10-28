#include "main.h"

/**
 * print_line - Entry point
 * @n: input
 * Description: function that draws a straight line in the terminal.
 */

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length <= n; length++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
