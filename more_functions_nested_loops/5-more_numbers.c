#include "main.h"

/**
 * more_numbers - Entry point
 * Description: function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int ligne;
	char n;

	for (ligne = 1; ligne <= 10; ligne++)
	{
		n = '0';
		while (ligne <= 14)
		{
			_putchar((n % 10) + '0');
			_putchar((n / 10) + '0');
			n++;
		}
		_putchar('\n');
	}
}
