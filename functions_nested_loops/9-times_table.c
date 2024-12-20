#include "main.h"

/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			_putchar(i * j + '0');
			else if (i * j >= 10)
			{
			_putchar(' ');
			_putchar((i * j / 10) + '0');
			_putchar((i * j % 10) + '0');
			}
			else
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(i * j + '0');
			}
			if (j < 9)
			{
			_putchar(',');
			}
		}
		_putchar('\n');
	}
}
