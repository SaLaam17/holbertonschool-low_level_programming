#include <stdio.h>
#include "dog.h"

/**
 * 
 *
 * canif: new dog to be created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *canif;

	canif = malloc(sizeof(dog_t));

	if (canif == NULL)
		return (NULL);

	(*canif).name = name;
	(*canif).age = age;
	(*canif).owner = owner;
}
