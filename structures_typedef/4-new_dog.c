#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: the new struct dog to be created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *canif;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	canif = malloc(sizeof(dog_t));

	if (canif == NULL)
		return (NULL);

	(*canif).name = name;
	(*canif).age = age;
	(*canif).owner = owner;

	return (canif);
}
