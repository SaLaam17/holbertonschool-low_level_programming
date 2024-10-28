#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: function that prints the numbers, from 0 to 9,
 * followed by a new line. Do not print 2 and 4.
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch != '2' && ch != '4')
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
