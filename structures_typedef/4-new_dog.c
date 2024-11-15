#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Function that find the lenght of a string
 * @str: the string to measure
 * Return: the lenght of the string
 */

int _strlen(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _strcopy - Function to copy a string src into the tring dest
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

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

	(*canif).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*canif).name == NULL)
	{
		free(canif);
		return (NULL);
	}

	(*canif).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*canif).owner == NULL)
	{
		free((*canif).name);
		free(canif);
		return (NULL);
	}

	(*canif).name = _strcopy((*canif).name, name);
	(*canif).age = age;
	(*canif).owner = _strcopy((*canif).owner, owner);

	return (canif);
}
