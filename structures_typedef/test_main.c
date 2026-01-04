#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *d1;
	dog_t d2;

	/* Test init_dog */
	init_dog(&d2, "Poppy", 3.5, "Bob");
	print_dog(&d2);

	/* Test new_dog */
	d1 = new_dog("Ghost", 4.75, "Jon Snow");
	print_dog(d1);

	/* Free memory from new_dog */
	free(d1->name);
	free(d1->owner);
	free(d1);

	return (0);
}

