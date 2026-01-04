#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to dog_t to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;

	if (d->name != 0)
		free(d->name);
	if (d->owner != 0)
		free(d->owner);

	free(d);
}

