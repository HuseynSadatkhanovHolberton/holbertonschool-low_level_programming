#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: hash table
 * @key: key (cannot be empty)
 * @value: value (must be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (!ht || !key || *key == '\0')
        return (0);

    /* Compute index */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if key already exists, update value */
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            /* Replace old value */
            free(current->value);
            current->value = strdup(value ? value : "");
            if (!current->value)
                return (0);
            return (1);
        }
        current = current->next;
    }

    /* Key not found, create new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value ? value : "");
    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Insert at beginning of list for collisions */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

