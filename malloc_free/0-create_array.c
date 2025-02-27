#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * Definition: function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: NULL - if it fails or if size = 0
 * a pointer to the array - otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
