#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: input
 * Return: 1, 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
