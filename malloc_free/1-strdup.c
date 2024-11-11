#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * Definition: function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 * Return: NULL - if str = NULL or insufficient memory is available
 * a pointer to the duplicated string - otherwise
 */

char *_strdup(char *str)
{
	char *str_copy;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	str_copy = malloc(sizeof(char) * (len + 1));

	if (str_copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		str_copy[i] = str[i];

	str_copy[len] = '\0';

	return (str_copy);
}
