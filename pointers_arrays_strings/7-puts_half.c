#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: the string to print the half from.
 */

void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n = 0;

	while (str[i++])
	len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
