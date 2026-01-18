#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list node
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototypes for Tasks 0–4 */
size_t print_list(const list_t *h);                  /* Task 0 */
size_t list_len(const list_t *h);                    /* Task 1 */
list_t *add_node(list_t **head, const char *str);   /* Task 2 */
list_t *add_node_end(list_t **head, const char *str); /* Task 3 */
void free_list(list_t *head);                        /* Task 4 */

#endif /* LISTS_H */

