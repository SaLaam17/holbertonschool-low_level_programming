#include "main.h"

/**
 * _isalpha - Entry point
 * @c: input
 * Description: int _islower checks for lowercase character.
 * Return: 1, 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
