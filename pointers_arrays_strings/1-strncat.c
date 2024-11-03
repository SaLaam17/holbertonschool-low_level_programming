#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from the source string.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer to the destination string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	dest_len++;

	for (i = 0; src[i] && i < n; i++)
	dest[dest_len++] = src[i];

	return (dest);
}
