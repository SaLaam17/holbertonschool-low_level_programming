#include "main.h"

/**
 * _strpbrk - Entry point
 * Description:function that searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
