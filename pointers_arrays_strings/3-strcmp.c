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
	int j = 0;
	int s1_len = 0;
	int s2_len = 0;
	int diff_s1_s2 = s1_len - s2_len;

	while (s1[i++])
	s1_len++;

	while (s2[j++])
	s2_len++;

	return (diff_s1_s2);
}
