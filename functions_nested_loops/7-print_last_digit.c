#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: input
 * Description: prints the last digit of a number.
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	_putchar('\n');
	return (last_digit);
}
