#include "main.h"

/**
 * _islower - Entry point
 * @c: input
 * Description: int _islower checks for lowercase character.
 * Return: 1, 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}