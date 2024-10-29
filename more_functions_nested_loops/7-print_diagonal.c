#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: input
 * Description: Function that draws a diagonal line on the terminal.
 */

void print_diagonal(int n)
{
	int length;
	int num_escape;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (num_escape = 0; num_escape < length; num_escape++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
