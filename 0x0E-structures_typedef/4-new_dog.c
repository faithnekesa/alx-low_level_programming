#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog instance
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog
 * Return: struct dog.
 * return NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_copy;
	int counter, name_copy, owner_copy;

	dog_copy = malloc(sizeof(*dog_copy));
	if (dog_copy == NULL || !(name) || !(owner))
	{
		free(dog_copy);
		return (NULL);
	}

	for (name_copy = 0; name[name_copy]; name_copy++)
		;

	for (owner_copy = 0; owner[owner_copy]; owner_copy++)
		;
	dog_copy->owner = malloc(owner_copy + 1);

	dog_copy->name = malloc(name_copy + 1);

	if (!(dog_copy->name) || !(dog_copy->owner))
	{
		free(dog_copy->name);
		free(dog_copy->owner);
		free(dog_copy);
		return (NULL);
	}

	for (counter = 0; counter < name_copy; counter++)
		dog_copy->name[counter] = name[counter];
	dog_copy->name[counter] = '\0';

	dog_copy->age = age;

	for (counter = 0; counter < owner_copy; counter++)
		dog_copy->owner[counter] = owner[counter];
	dog_copy->owner[counter] = '\0';

	return (dog_copy);
}
