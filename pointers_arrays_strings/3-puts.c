#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: The string to get the length of.
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
