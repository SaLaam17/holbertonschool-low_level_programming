#include "main.h"
#include <stdio.h>

/**
 * _isdigit - main Entry
 * @c: input
 * Description: function that checks for a digit (0 through 9).
 * Return: 1, 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
