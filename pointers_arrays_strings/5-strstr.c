#include "main.h"
/**
 * _strstr - Entry point
 *
 * Description: function that locates a substring.
 * @haystack: string where to look for needle
 * @needle: string to looking for inside haystack
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}
