#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog_stack;
    dog_t *my_dog_heap;

    /* Test init_dog */
    init_dog(&my_dog_stack, "Poppy", 3.5, "Bob");
    print_dog(&my_dog_stack);

    /* Test new_dog */
    my_dog_heap = new_dog("Ghost", 4.75, "Jon Snow");
    print_dog(my_dog_heap);

    /* Free heap memory */
    free(my_dog_heap->name);
    free(my_dog_heap->owner);
    free(my_dog_heap);

    return (0);
}

