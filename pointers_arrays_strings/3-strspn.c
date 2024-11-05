#include "main.h"
/**
 * _strspn - Entry point
 * Description:function that gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num_bytes = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num_bytes++;
				found = 1;
				break;
			}
		}
		if (!found)
		break;
	}
	return (num_bytes);
}
