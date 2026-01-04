#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string (like allowed strcpy/strlen)
 * @str: string to duplicate
 *
 * Return: pointer to new string, or NULL if it fails
 */
static char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (str == 0)
		return (0);

	for (len = 0; str[len]; len++)
		;
	copy = malloc(len + 1);
	if (copy == 0)
		return (0);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}

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

	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);

	d->name = _strdup(name);
	if (d->name == 0)
	{
		free(d);
		return (0);
	}

	d->owner = _strdup(owner);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (0);
	}

	d->age = age;

	return (d);
}

