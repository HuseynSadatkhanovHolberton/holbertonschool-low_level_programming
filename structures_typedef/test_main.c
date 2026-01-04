#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    print_dog(&my_dog);

    /* Test NULL fields */
    my_dog.name = 0;
    my_dog.owner = 0;
    print_dog(&my_dog);

    /* Test NULL struct */
    print_dog(0);

    return (0);
}

