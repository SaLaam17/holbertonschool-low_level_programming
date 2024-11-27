#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * Decription: function that frees dogs.
 * @d: dog I want to be free
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free((*d).owner);
	free((*d).name);
	free(d);

}
