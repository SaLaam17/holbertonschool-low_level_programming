#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: input
 * Description: prints the last digit of a number.
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		n = n % 10;
		_putchar(n + '0');
		_putchar('\n');
	}
		return (0);

}
