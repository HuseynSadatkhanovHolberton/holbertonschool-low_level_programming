#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    int ret;

    /* Task 0: create table */
    ht = hash_table_create(1024);
    if (!ht)
        return (EXIT_FAILURE);

    /* Task 3: set some key/value pairs */
    ret = hash_table_set(ht, "betty", "cool");
    printf("Added 'betty': %i\n", ret);

    ret = hash_table_set(ht, "C", "is fun");
    printf("Added 'C': %i\n", ret);

    return (EXIT_SUCCESS);
}

