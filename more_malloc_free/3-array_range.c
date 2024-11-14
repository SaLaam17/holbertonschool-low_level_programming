#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 * Description: function that creates an array of integers.
 * @min: input
 * @max: input
 * Return: the pointer to array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	return (NULL);

	for (i = 0; i <= max; i++)
	array[i] = min + i;

	return (array);
}
