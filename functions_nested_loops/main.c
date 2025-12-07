#include "main.h"
#include <stdio.h> /* local testing only */

int main(void)
{
    int r;

    r = add(1, 2);
    printf("%d\n", r);

    r = add(98, 1024);
    printf("%d\n", r);

    r = add(-5, 7);
    printf("%d\n", r);

    return (0);
}

