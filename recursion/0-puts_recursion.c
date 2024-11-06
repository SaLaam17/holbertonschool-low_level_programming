#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: function that prints a string, followed by a new line.
 * @s: The string to print
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
