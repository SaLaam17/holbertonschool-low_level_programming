#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @src: the address of memory to copy
 * @dest: the address of memory to be filled with src
 * @n: the number of bytes to be copy
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
