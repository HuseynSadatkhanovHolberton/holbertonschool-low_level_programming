#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy;
	char *owner_copy;
	size_t len;

	/* Allocate memory for struct */
	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);

	/* Allocate and copy name */
	len = strlen(name) + 1;
	name_copy = malloc(len);
	if (name_copy == 0)
	{
		free(d);
		return (0);
	}
	strcpy(name_copy, name);

	/* Allocate and copy owner */
	len = strlen(owner) + 1;
	owner_copy = malloc(len);
	if (owner_copy == 0)
	{
		free(name_copy);
		free(d);
		return (0);
	}
	strcpy(owner_copy, owner);

	/* Assign values */
	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

