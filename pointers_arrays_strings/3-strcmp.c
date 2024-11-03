#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: the string to be compared to s2
 * @s2: The string to be compared to s1
 * Return: the difference between the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i++] && s2[i++])
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}

	return (s1[i] - s2[i]);
}
