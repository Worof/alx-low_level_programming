#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t or NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName, *newOwner;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	if (name)
	{
		newName = malloc(strlen(name) + 1);
		if (!newName)
		{
			free(newDog);
			return (NULL);
		}
		strcpy(newName, name);
	}
	else
		newName = NULL;

	if (owner)
	{
		newOwner = malloc(strlen(owner) + 1);
		if (!newOwner)
		{
			free(newName);
			free(newDog);
			return (NULL);
		}
		strcpy(newOwner, owner);
	}
	else
		newOwner = NULL;

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
