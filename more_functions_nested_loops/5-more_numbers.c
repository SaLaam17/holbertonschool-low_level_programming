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

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
