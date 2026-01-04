#include <stdio.h>
#include <stdlib.h>
#include "dog.h"  /* <--- Must include this to know free_dog */

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    free_dog(my_dog);  /* now compiler knows about free_dog */

    return (0);
}

