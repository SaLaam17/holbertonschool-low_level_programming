#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * description: function that returns the length of a string.
 * @s: The string to measure
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}

	return (len);
}

