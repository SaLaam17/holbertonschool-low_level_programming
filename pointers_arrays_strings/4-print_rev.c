#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @str: The string to be reversed
 *
 */

void print_rev(char *str)
{
	char tmp = 0;
	int end = 0;
	int start = 0;

	while (str[end] != '\0')
	{
		start++;
		end--;
	}
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
		_putchar(*str);
	}
	_putchar('\n');
}

