#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h" /* needed for all prototypes */

/**
 * main - test hash_table_create, hash_djb2, key_index
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    hash_table_t *ht;
    char *s;
    unsigned long int array_size;

    /* Task 0: Create a hash table of size 1024 */
    ht = hash_table_create(1024);
    printf("Hash table pointer: %p\n", (void *)ht);

    /* Task 1 & 2: djb2 and key_index */
    array_size = 1024;
    s = "cisfun";
    printf("Hash for '%s': %lu\n", s, hash_djb2((unsigned char *)s));
    printf("Index for '%s': %lu\n", s, key_index((unsigned char *)s, array_size));

    s = "Don't forget to tweet today";
    printf("Hash for '%s': %lu\n", s, hash_djb2((unsigned char *)s));
    printf("Index for '%s': %lu\n", s, key_index((unsigned char *)s, array_size));

    s = "98";
    printf("Hash for '%s': %lu\n", s, hash_djb2((unsigned char *)s));
    printf("Index for '%s': %lu\n", s, key_index((unsigned char *)s, array_size));

    return (EXIT_SUCCESS);
}

