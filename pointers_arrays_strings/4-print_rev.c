#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @str: The string to be reversed
 *
 */

void print_rev(char *str)
{
	int len = 0;
	int i;

	while (str[i++])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

