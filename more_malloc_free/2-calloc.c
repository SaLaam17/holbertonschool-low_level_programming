#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point
 * Description: function that allocates memory for an array, using malloc
 * @nmemb: input
 * @size: input
 * Return: a pointer to the allocated memory
 * for the array of nmemb elements of size bytes
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < nmemb; i++)
	((char *)array)[i] = 0;

	return (array);
}

