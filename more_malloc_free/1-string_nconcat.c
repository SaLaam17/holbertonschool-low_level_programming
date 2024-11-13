#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 * most n bytes from the second one.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_concat;
	unsigned int len = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	n_concat = malloc(sizeof(char) * (len + n + 1));

	if (n_concat == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		n_concat[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		n_concat[len++] = s2[i];

	n_concat[len] = '\0';

	return (n_concat);
}
