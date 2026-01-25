#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/* Task 0: Hash node structure */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/* Task 0: Hash table structure */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Task 0: Create a hash table */
hash_table_t *hash_table_create(unsigned long int size);

/* Task 1: djb2 hash function */
unsigned long int hash_djb2(const unsigned char *str);

/* Task 2: Get index of a key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif /* HASH_TABLES_H */

