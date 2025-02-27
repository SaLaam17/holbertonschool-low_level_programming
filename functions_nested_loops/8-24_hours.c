#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: Prints every minute of the day starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int H;
	int M;

	for (H = 0; H <= 23; H++)
	{
		for (M = 0; M <= 59; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
