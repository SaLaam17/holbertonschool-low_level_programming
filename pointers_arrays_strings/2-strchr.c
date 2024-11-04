#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: The string in which we are looking for the value of c
 * @c: the char we looking for
 *
 * return: If c is found - a pointer to the first occurence.
 *         If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return (NULL);
}
