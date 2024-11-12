#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * Description: function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the 2 dimensional array of integers.
 * @height: height of the 2 dimensional array of integers.
 * Return: NULL on failure and If width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **matrice = NULL;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrice = malloc(height * sizeof(int *));
	if (matrice == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrice[i] = malloc(width * sizeof(int));
		if (matrice[i] == NULL)
		{
		for (j = 0; j < i; j++)
		return (NULL);
		}
	}
	return (matrice);
}
